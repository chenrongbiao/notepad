#ifndef EVENTPROCESSOR_H
#define EVENTPROCESSOR_H

#include <string>
#include <functional>
#include <map>
#include <iostream>
#include <unordered_map>
#include "actor.h"

class  ActorProcessor
{
public:
    ActorProcessor();
    ~ActorProcessor();
public:

    /**
    * @brief Register the callback function and construct the anonymous function with std::bind
    */
    template<typename ... Args>
    void invoke(const std::string& route,Args&& ... args) const noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end())
            (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
    }

    /**
    * @brief Register the callback function and construct the anonymous function with std::bind
    */
    template<typename R, typename ... Args>
    R invoke(const std::string& route,Args&& ...args) const
    {
        if (m_actorMap->find(route) != m_actorMap->end())
            return (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
        return nullptr;
    }

    /**
    * @brief 注册一个actor，其中route是唯一的
    */
    void registerActor(const std::string& route, Actor*actor);

    /**
    * @brief 删除一个actor
    */
    void removeActor(const std::string& route);

    /**
    * @brief 查找一个actor， 返回其指针
    */
    Actor* findActor(const std::string& route);

    /**
    * @brief 重置一个actor，注意原有的actor会被删除
    */
    bool resetActor(const std::string& route,Actor*actor);

private:
    std::unordered_map<std::string, Actor*>* m_actorMap;
private:
    // not allow copy constroct
    ActorProcessor(ActorProcessor&&)=delete;
    ActorProcessor& operator=(const ActorProcessor&)=delete;
};

#endif // EVENTPROCESSOR_H
