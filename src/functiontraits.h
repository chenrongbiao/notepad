#ifndef FUNCTIONTRAITS_H
#define FUNCTIONTRAITS_H

#include <utility>
#include <functional>
#include <algorithm>
#include <tuple>

template<typename T>
struct function_traits;

template<typename ReturnType, typename... Args>
struct function_traits<ReturnType(Args...)>
{
public:
    enum {
        value = sizeof...(Args)
    };
    using function_type         = ReturnType(*)(Args...);
    using return_type           = ReturnType;
    using stl_function_type     = std::function<function_type>;
    using function_pointer_type = ReturnType(*)(Args...);
    using lambda_function_type  = ReturnType(*)(Args...);

    using tuple_type = std::tuple<std::remove_cv_t<std::remove_reference_t<Args>>...> ;
    using bare_tuple_type =  std::tuple<std::remove_const_t<std::remove_reference_t<Args>>...>;

    template<std::size_t N, typename = typename std::enable_if<(N < value)>::type>
    using args = typename std::tuple_element<N, std::tuple<Args...>>;

    template <std::size_t N>
    struct arguments
    {
        static_assert(N < value, "[error]:invalid parameter index.");
        using type = typename std::tuple_element<N, std::tuple<Args...>>::type;
    };
};

template<typename ReturnType, typename... Args>
struct function_traits<ReturnType(*)(Args...)> : function_traits<ReturnType(Args...)> {};

template<typename ReturnType, typename... Args>
struct function_traits<std::function<ReturnType(Args...)>> : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...)> : function_traits<ReturnType(Args...)>{};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) const> : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) volatile> : function_traits<ReturnType(Args...)> {};

template <typename ReturnType, typename ClassType, typename... Args>
struct function_traits<ReturnType(ClassType::*)(Args...) const volatile> : function_traits<ReturnType(Args...)> {};

template<typename Callable>
struct function_traits : function_traits<decltype(&Callable::operator())> {};

template<typename Function>
typename function_traits<Function>::stl_function_type
function_cast(const Function& lambda)
{
    return static_cast<typename function_traits<Function>::stl_function_type>(std::forward<Function>(lambda));
}

template<typename Function>
typename function_traits<Function>::stl_function_type
function_cast(Function&& lambda)
{
    return static_cast<typename function_traits<Function>::stl_function_type>(lambda);
}

template<typename Function>
typename function_traits<Function>::function_pointer_type
function_cast(const Function& lambda)
{
    return static_cast<typename function_traits<Function>::pointer>(lambda);
}

#endif // FUNCTIONTRAITS_H
