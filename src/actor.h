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

template<typename ReturnType, typename... Args>
struct function_traits<ReturnType(Args...)>{
    using tuple_type = std::tuple<std::remove_cv_t<std::remove_reference_t<Args>>...> ;
};

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


template<typename Function>
struct invoker
{
    static inline void apply(const Function& func, void* bl, void* result)
    {
        using tuple_type = typename function_traits<Function>::tuple_type;
        const tuple_type* tp = static_cast<tuple_type*>(bl);
        call(func, *tp, result);
    }

    template<typename F, typename ... Args>
    static typename std::enable_if<std::is_void<typename std::result_of<F(Args...)>::type>::value>::type
    call(const F& f, const std::tuple<Args...>& tp, void*)
    {
        call_helper(f, std::make_index_sequence<sizeof... (Args)>{}, tp);
    }

    template<typename F, typename ... Args>
    static typename std::enable_if<!std::is_void<typename std::result_of<F(Args...)>::type>::value>::type
    call(const F& f, const std::tuple<Args...>& tp, void* result)
    {
        auto r = call_helper(f, std::make_index_sequence<sizeof... (Args)>{}, tp);
        *(decltype(r)*)result = r;
    }

    template<typename F, size_t... I, typename ... Args>
    static auto call_helper(const F& f, const std::index_sequence<I...>& h, const std::tuple<Args...>& tup)
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

    /**
    * @brief Register the callback function and construct the anonymous function with std::bind
    */
    template<typename Function>
    void registerFunction(Function&& function_any) noexcept
    {
        m_invokeFunctionWapper =  { std::bind(&invoker<Function>::apply, function_any,  std::placeholders::_1, std::placeholders::_2) };
    }

    /**
    * @brief Register the callback function and construct the anonymous function with std::bind
    */
    template<typename ... Args>
    void invoke(Args&& ... args) const noexcept
    {
        auto args_tuple = std::make_tuple(std::forward<Args>(args)...);
        m_invokeFunctionWapper(&args_tuple, nullptr);
    }

    /**
    * @brief Register the callback function and construct the anonymous function with std::bind
    */
    template<typename R, typename ... Args>
    R invoke(Args&& ...args) const
    {
        auto args_tuple = std::make_tuple(std::forward<Args>(args)...);
        R return_value;
        m_invokeFunctionWapper(&args_tuple, &return_value);
        return return_value;
    }
private:
    /**
    * @note m_invokeFunctions is an anonymous lamba expression that encapsulates a function
    * Functions include Lamba expressions, member functions, funtor, ordinary functions, and function Pointers
    */
    FunctionWapper m_invokeFunctionWapper;
};

#endif
