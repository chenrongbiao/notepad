#ifndef _PROCESSOR_H
#define _PROCESSOR_H

#include <string>
#include <functional>
#include <map>
#include <iostream>
#include <unordered_map>
#include <QDebug>
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

    template<typename R, typename ... Args>
    R invoke(const std::string& route,Args&& ...args) const
    {
        qDebug() << route.c_str();
        qDebug() << m_actorMap->size();
        if (m_actorMap->find(route) != m_actorMap->end()){
            qDebug() << "test";
            return (*m_actorMap)[route]->invoke<R>(std::forward<Args>(args)...);
        }
        qDebug() << "test fault";
        return NULL;
    }

    void registerActor(const std::string& route, Actor*actor);

    void removeActor(const std::string& route);
    Actor* findActor(const std::string& route);
    bool resetActor(const std::string& route,Actor*actor);

private:
    std::unordered_map<std::string, Actor*>* m_actorMap;

private:
    ActorProcessor(ActorProcessor&&)=delete;
    ActorProcessor& operator=(const ActorProcessor&)=delete;
};

#endif // EVENTPROCESSOR_H
