// program with functions overriding and exceptions

#include <iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        throw "exception from base class";
    }
};

class derived : public base{
    public:
    void display() override{
        throw "exception from derived class";
    }
};

int main(){
    base* b;
    derived d;
    b= &d;

    try{
        b->display();
    }
    catch(const char** msg){
        cout<<msg<<endl;
    }
    return 0;
}