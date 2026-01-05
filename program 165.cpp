//program ith exceptions in polymorphic classes

#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        throw "base class exception";
    }
};

class derived : public base{
    public:
    void show() override{
        throw "derived class exception";
    }
};

int main(){
    base* b;
    derived d;
    b = &d;

    try{
        b->show();
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}