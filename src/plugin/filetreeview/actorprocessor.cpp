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


#include "actorprocessor.h"
ActorProcessor::ActorProcessor():
    m_actorMap(new std::unordered_map<std::string, Actor*>)
{}

/**
 * @brief
 */
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

/**
 * @brief
 */
void ActorProcessor::registerActor(const std::string &route, Actor *actor)
{
    m_actorMap->insert(std::make_pair(route,actor));
}

/**
 * @brief
 */
void ActorProcessor::removeActor(const std::string &route)
{
    auto iter = (*m_actorMap).find(route);
    if(iter != m_actorMap->end())
    {
        m_actorMap->erase(route);
        delete iter->second;
    }
}

/**
 * @brief
 */
Actor *ActorProcessor::findActor(const std::string &route)
{
    auto iter = (*m_actorMap).find(route);
    if(iter != m_actorMap->end())
    {
        return (*m_actorMap)[route];
    }
    return nullptr;
}

/**
 * @brief
 */
bool ActorProcessor::resetActor(const std::string &route, Actor *actor)
{
    auto iter = (*m_actorMap).find(route);
    if(iter != m_actorMap->end())
    {
        m_actorMap->erase(route);
        delete iter->second;
        return true;
    }
    return false;
}
