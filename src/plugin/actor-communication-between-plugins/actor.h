#ifndef _ACTOR_H_
#define _ACTOR_H_

#include <cstdint>
#include <string>
#include <memory>
#include <tuple>
#include <functional>
#include <utility>

template<typename T>
struct function_traits;

//函数萃取器，编译期萃取函数参数列表类型与返回值类型
template<typename ReturnType, typename... Args>
struct function_traits<ReturnType(Args...)>
{
    // 获取参数列表项个数
    enum {
        value = sizeof...(Args)
    };
    // arg_types is a list of the types of the arguments.
    using tuple_type =std::tuple<typename std::decay<Args>::type...>;

    template<std::size_t N, typename = typename std::enable_if<(N < value)>::type>
    using args = typename std::tuple_element<N, std::tuple<Args...>>;

    //  return type of the function.
    using return_type = ReturnType;

    template <std::size_t N>
    struct arguments
    {
        static_assert(N < value, "[error]:invalid parameter index.");
        using type = typename std::tuple_element<N, std::tuple<Args...>>::type;
    };
};

//各种类型的函数萃取
template<typename ReturnType, typename... Args>
struct function_traits<ReturnType(*)(Args...)>
    : function_traits<ReturnType(Args...)> {};

template<typename ReturnType, typename... Args>
struct function_traits<std::function<ReturnType(Args...)>>
    : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...)>
    : function_traits<ReturnType(Args...)>{};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) const>
    : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) volatile>
    : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) const volatile>
    : function_traits<ReturnType(Args...)> {};

template<typename Callable>
struct function_traits
    : function_traits<decltype(&Callable::operator())> {};

struct invoker
{
    //@note 为了减少成员函数封装层数，单独实现了成员函数注册，其实可以统一走普通函数注册
    //      只需要将成员函数封装成lamada表达式，就可以执行普通函数注册。
    template<typename Function, typename ThisType>
    static inline void apply(const Function& func, ThisType* thisType, void* bl, void* result)
    {
        using tuple_type = typename function_traits<Function>::tuple_type;
        const tuple_type* tp = static_cast<tuple_type*>(bl);
        call(func,thisType,*tp, result);
    }

    template<typename Function,typename ThisType, typename ... Args>
    static typename std::enable_if<std::is_void<typename function_traits<Function>::return_type>::value>::type
    call(const Function& f,ThisType* thisType, const std::tuple<Args...>& tp, void*)
    {
        call_helper(f, thisType, std::make_index_sequence<function_traits<Function>::value>{}, tp);
    }

    template<typename Function,typename ThisType, typename ... Args>
        static typename std::enable_if<!std::is_void<typename function_traits<Function>::return_type>::value>::type
    call(const Function& f, ThisType * thisType,const std::tuple<Args...>& tp, void* result)
    {
        auto r = call_helper(f, thisType, std::make_index_sequence<function_traits<Function>::value>{}, tp);
        *(decltype(r)*)result = r;
    }

    template<typename Function,typename ThisType, size_t... I, typename ... Args>
    static auto call_helper(const Function& f,ThisType* thisType, const std::index_sequence<I...>& h, const std::tuple<Args...>& tup)
    {
        return (thisType->*f)(std::get<I>(tup)...);
    }

    //普通函数
    template<typename Function>
    static inline void apply(const Function& func, void* bl, void* result)
    {
        using tuple_type = typename function_traits<Function>::tuple_type;
        const tuple_type* tp = static_cast<tuple_type*>(bl);
        call(func, *tp, result);
    }

    template<typename Function, typename ... Args>
    static typename std::enable_if<std::is_void<typename function_traits<Function>::return_type>::value>::type
    call(const Function& f, const std::tuple<Args...>& tp, void*)
    {
        call_helper(f, std::make_index_sequence<function_traits<Function>::value>{}, tp);
    }

    template<typename Function, typename ... Args>
    static typename std::enable_if<!std::is_void<typename function_traits<Function>::return_type>::value>::type
    call(const Function& f, const std::tuple<Args...>& tp, void* result)
    {
        auto r = call_helper(f, std::make_index_sequence<function_traits<Function>::value>{}, tp);
        *(decltype(r)*)result = r;
    }

    template<typename Function, size_t... I, typename ... Args>
    static auto call_helper(const Function& f, const std::index_sequence<I...>& h, const std::tuple<Args...>& tup)
    {
        return f(std::get<I>(tup)...);
    }
};

class Actor : public std::enable_shared_from_this<Actor>
{
public:
    using Ptr = std::shared_ptr<Actor>;
    using FunctionWapper = std::function<void(void*, void*)>;

public:
    Actor(){}
    ~Actor(){}

    template<typename Function>
    void registerFunction(Function function_any) noexcept
    {
        m_invokeFunctionWapper =  { std::bind(&invoker::apply<Function>, function_any,  std::placeholders::_1, std::placeholders::_2) };
    }

    template<typename Function, typename ThisType>
    void registerFunction(Function function, ThisType* p) noexcept
    {
        m_invokeFunctionWapper =  { std::bind(&invoker::apply<Function,ThisType>, function, p,  std::placeholders::_1, std::placeholders::_2) };
    }

    template<typename ... Args>
    void invoke(Args ...args) const noexcept
    {
        auto args_tuple = std::make_tuple(std::forward<Args>(args)...);
        m_invokeFunctionWapper(&args_tuple, nullptr);
    }

    template<typename R, typename ... Args>
    R invoke(Args ...args) const
    {
        auto args_tuple = std::make_tuple(std::forward<Args>(args)...);
        R returnValue;
        m_invokeFunctionWapper(&args_tuple, &returnValue);
        return returnValue;
    }
private:
    FunctionWapper m_invokeFunctionWapper;
};

// 注册辅助宏
// note: linux下由于gcc的原因，function仅支持不带括号的连续字符，windows没有限制
// -processor 系统曝露的processor指针
// -identify 唯一标识符
// -function 要注册的函数
#define REGISTER_FUNCTION(processor,identify, function)             \
do {                                                                \
    Actor* actor = new Actor();                                     \
    actor->registerFunction(##function);                            \
    ##processor->registerActor(##identify, actor);                  \
}while(0);

//注册辅助宏，注册成员函数
// -processor 系统曝露的processor指针
// -identify 唯一标识符
// -function 要注册的函数
#define REGISTER_METHOD_FUNCTION(processor,identify, function)     \
do {                                                               \
   Actor* actor = new Actor();                                     \
   actor->registerFunction(&##function,this);                      \
   ##processor->registerActor(##identify, actor);                  \
}while(0);
#endif
