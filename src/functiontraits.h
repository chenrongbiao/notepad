#ifndef FUNCTIONTRAITS_H
#define FUNCTIONTRAITS_H

#include <utility>
#include <functional>
#include <algorithm>
#include <tuple>

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

#endif // FUNCTIONTRAITS_H
