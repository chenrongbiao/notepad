/**
 ** This file is part of ndd plugin file tree view
 ** Copyright ji wang <matheuter@gmail.com>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU Lesser General Public License as
 ** published by the Free Software Foundation, either version 3 of the
 ** License, or (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU Lesser General Public License for more details.
 **
 ** You should have received a copy of the GNU Lesser General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/


#pragma once
#include <cstdint>
#include <string>
#include <memory>
#include <tuple>
#include <functional>

#include "functiontraits.h"

/**
 * @brief Actor class, which encapsulates the event model
 * @note enable_shared_from_this allows us to get safe Pointers internally
 */
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
        using tuple_args_type = std::tuple<Args...>;
        char data[sizeof(tuple_args_type)];
        std::tuple<Args...>* tuples_pointer = new (data) tuple_args_type;

        *tuples_pointer = std::make_tuple(std::forward<Args>(args)...);

        R return_value;
        m_invokeFunctionWapper(tuples_pointer, &return_value);
        return return_value;
    }

public:
    /**
    * @brief This struct encapsulates a function,
    * essentially storing the return value and parameters in two variables
    * which can unify the way the function is stored.
    */
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
private:
    /**
    * @note m_invokeFunctions is an anonymous lamba expression that encapsulates a function
    * Functions include Lamba expressions, member functions, funtor, ordinary functions, and function Pointers
    */
    FunctionWapper m_invokeFunctionWapper;
};
