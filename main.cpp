#include <iostream>
#include <unistd.h>
#include <vector>

class Object {
private:
    int a;
    public Object(int n){
        usleep(1000);
        a = n;
    }
    public::void setA(int A){
        a = A;
    }
};

class ObjectPool {
private:
    std::vector<Object> _available; = std::vector<Object>();
    std::vector<Object> _inUse; = std::vector<Object>();

    public ObjectPool(int n){
        for (int i = 0; i < n; i++;){
            newObject = new Object();
            _available.push_back();
        }
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}