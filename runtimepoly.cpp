// program demonstrating runtime polymorphism

#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout<<"base class show\n";
    }
};

class derived : public base{
    public:
    void show(){
        cout<<"derived class show\n";
    }
};

int main(){
    base *b;
    derived d;
    b = &d;
    b -> show();
    return 0;
}