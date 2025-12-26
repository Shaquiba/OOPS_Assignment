// program showing destructor order in inheritance

#include <iostream>
using namespace std;

class A{
    public:
    ~A(){
        cout<<"destructor of class A\n";
    }
};

class B : public A{
    public:
    ~B(){
        cout<<"destructor of class B\n";
    }
};

int main(){
    B obj;
    return 0;
}