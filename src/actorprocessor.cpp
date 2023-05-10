#include "actorprocessor.h"

ActorProcessor::ActorProcessor():
    m_actorMap(new std::unordered_map<std::string, Actor*>)
{}

ActorProcessor::~ActorProcessor()
{
    for (auto& item : (*m_actorMap))
    {
        if(item.second != nullptr)
            delete item.second;
    }
    if (m_actorMap)
        delete m_actorMap;
}

void ActorProcessor::registerActor(const std::string &route, Actor *actor)
{
    m_actorMap->insert(std::make_pair(route,actor));
}

void ActorProcessor::unregisterActor(const std::string &route)
{
    auto iter = (*m_actorMap).find(route);
    if(iter != m_actorMap->end())
    {
        m_actorMap->erase(route);
        delete iter->second;
    }
}

ActorProcessor::StatusType ActorProcessor::processorStatus() const
{
    return m_processorStatus;
}
