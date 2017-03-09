//
// Created by joshjcbsn on 3/6/17.
//

#ifndef OBJECTPOOL_OBJECTPOOL_H
#define OBJECTPOOL_OBJECTPOOL_H

#include "Object.h"
#include <vector>

class ObjectPool {
private:
    std::vector<Object*> _available = std::vector<Object*>();
    std::vector<Object*> _inUse = std::vector<Object*>();
public:
    ObjectPool();
    Object* getObject();
    void releaseObject(Object* o);
    void cleanUp(Object* o);
};


#endif //OBJECTPOOL_OBJECTPOOL_H
