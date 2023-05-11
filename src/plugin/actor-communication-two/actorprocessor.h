#ifndef _PROCESSOR_H
#define _PROCESSOR_H

#include "actor.h"
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

class ActorProcessor
{
public:
    ActorProcessor();
    ~ActorProcessor();

public:
    using ActorMap = std::unordered_map<std::string, Actor *>;

    // processor状态
    enum StatusType { SUCESS, FAULT, DEFAULT};

public:
    /**
     * 模板调用函数
     * @note:由于模板自动推导的缺陷，返回值与第一个参数类型相同时，需要显示指定类型
     *      void get(int a)调用格式为p->invoke("get", 1)，自动推导;
     *      因此，请避免返回值类型与第一个参数类型相同，以达到更加统一的调用方式
     * -route：  路由
     * -args：   参数列表
    */
    template<typename... Args>
    void invoke(const std::string &route, Args... args) noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end()) {
            (*m_actorMap)[route]->invoke(std::forward<Args>(args)...);
            m_processorStatus = StatusType::SUCESS;
        } else {
            m_processorStatus = StatusType::FAULT;
        }
    }

    /**
     * 模板调用函数
     * @note:由于模板自动推导的缺陷，返回值与第一个参数类型相同时，需要显示指定类型
     *      如：int add(int a, int b)调用格式为p->invoke<int, int, int>("add", 1,2);
     *      因此，请避免返回值类型与第一个参数类型相同，以达到更加统一的调用方式
     * -route：  路由
     * -args：   参数列表
    */
    template<typename R, typename... Args>
    R invoke(const std::string &route, Args... args) noexcept
    {
        if (m_actorMap->find(route) != m_actorMap->end()) {
            m_processorStatus = StatusType::SUCESS;
            return (*m_actorMap)[route]->invoke<R, Args...>(std::forward<Args>(args)...);
        } else {
            m_processorStatus = StatusType::FAULT;
            return NULL;
        }
    }

    //未用，留用升级扩展
    void set(const std::string &name, ActorProcessor *processor);

    //未用，留用升级扩展
    ActorProcessor *get(const std::string &name) const;

public:
    void registerActor(const std::string &route, Actor *actor);
    void unregisterActor(const std::string &route);

    StatusType processorStatus() const;

private:
    ActorMap *m_actorMap;
    StatusType m_processorStatus;

private:
    ActorProcessor(ActorProcessor &&) = delete;
    ActorProcessor &operator=(const ActorProcessor &) = delete;
};

#endif // EVENTPROCESSOR_H
