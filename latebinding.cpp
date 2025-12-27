// program demonstrating late binding

#include <iostream>
using namespace std;

class Base {
    public:
    virtual void display(){
        cout<<"base display";
    }
};

class derived : public Base{
    public:
    void display(){
        cout<<"derived display";
    }
};

int main(){
    Base* b;
    derived d;
    b = &d;
    b->display();
    return 0;
}