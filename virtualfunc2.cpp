// program with virtual function

#include <iostream>
using namespace std;

class A{
    public:
    virtual void display(){
        cout<<"class A display\n";
    }
};

class B : public A{
    public:
    void display(){
        cout<<"class B display\n";
    }
};

int main(){
    A *a;
    B b;
    a = &b;
    a ->display();
    return 0;
}