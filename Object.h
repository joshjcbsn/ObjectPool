//
// Created by joshjcbsn on 3/6/17.
//

#ifndef OBJECTPOOL_OBJECT_H
#define OBJECTPOOL_OBJECT_H

#include <unistd.h>


class Object {
private:
    int a;
public:
    Object() {usleep(1000); a=NULL; }
    Object(int A) {usleep(1000); a=A;}
    void setA(int A) {a=A;}
};


#endif //OBJECTPOOL_OBJECT_H
