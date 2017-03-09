//
// Created by joshjcbsn on 3/6/17.
//

#include "ObjectPool.h"
#include <mutex>
#include <algorithm>

std::mutex mtx;

ObjectPool::ObjectPool() {
    _available = std::vector<Object*>();
    _inUse = std::vector<Object*>();
}

Object* ObjectPool::getObject() {
    mtx.lock();
    if (_available.size() != 0){
        Object* obj = _available.back();
        _inUse.push_back(obj);
        _available.pop_back();
        return obj;
    } else {
        Object* obj = new Object();
        _inUse.push_back(obj);
        return obj;
    }
    mtx.unlock();
}

void ObjectPool::releaseObject(Object* o) {
    this->cleanUp(o);
    mtx.lock();
    _available.push_back(o);
    _inUse.erase(find(_inUse.begin(), _inUse.end(), o));
    mtx.lock();
}

void ObjectPool::cleanUp(Object* o) {
    o->setA(NULL);
}
