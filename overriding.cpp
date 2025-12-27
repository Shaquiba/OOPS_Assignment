// program demonstrating overriding base class function

#include <iostream>
using namespace std;

class base{
    public:
    void show(){
        cout<<"base show";
    }
};

class derived : public base{
    public:
    void show(){
        cout<<"Derived show";
    }
};

int main(){
    derived d;
    d.show();
    return 0;
}