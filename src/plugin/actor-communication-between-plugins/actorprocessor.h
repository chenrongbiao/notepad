#ifndef _PROCESSOR_H
#define _PROCESSOR_H

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
    using ActorMap          = std::unordered_map<std::string, Actor*>;

    // processor exe result status
    enum StatusType
    {
        SUCESS,
        FALL,
        ERROR,
        DEFAULT
    };

public:
    template<typename ... Args>
    void invoke(const std::string& route,Args ...args) noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end()){
            (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
            m_processorStatus = StatusType::SUCESS;
        }
        else{
            m_processorStatus = StatusType::FALL;
        }
    }

    template<typename R, typename ... Args>
    R invoke(const std::string& route,Args ...args) noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end()){
            m_processorStatus = StatusType::SUCESS;
            return (*m_actorMap)[route]->invoke<R,Args...>(std::forward<Args>(args)...);
        }
        else{
            m_processorStatus = StatusType::FALL;
            return NULL;
        }
    }

public:
    void        registerActor(const std::string& route, Actor*actor);
    void        unregisterActor(const std::string& route);

    StatusType  processorStatus() const;

private:
    ActorMap*                 m_actorMap;
    StatusType                m_processorStatus;
private:
    ActorProcessor(ActorProcessor&&)=delete;
    ActorProcessor& operator=(const ActorProcessor&)=delete;
};

#endif // EVENTPROCESSOR_H
