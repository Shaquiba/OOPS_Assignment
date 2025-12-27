// static vs dynamic binding

#include <iostream>
using namespace std;

class test{
    public:
    void fun1(){
        cout<<"static binding\n";
    }
    virtual void fun2(){
        cout<<"dynamic binding\n";
    }
};

int main(){
    test t;
    t.fun1();
    t.fun2();
    return 0;
}