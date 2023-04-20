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

    template<typename ... Args>
    void invoke(const std::string& route,Args&& ... args) const noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end())
            (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
    }

    template<typename R, typename ... Args>
    R invoke(const std::string& route,Args&& ...args) const
    {
        if (m_actorMap->find(route) != m_actorMap->end())
            return (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
        return nullptr;
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
