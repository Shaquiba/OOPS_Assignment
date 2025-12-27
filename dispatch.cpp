// program demonstrating dynamic method dispatch

#include <iostream>
using namespace std;

class A{
    public:
    virtual void fun(){
        cout<<" A fun";
    }
};

class B : public A{
    public:
    void fun(){
        cout<<"B fun";
    }
};

int main(){
    A* a;
    B b;
    a = &b;
    a->fun();
    return 0;
}