// polymorphic array of objects

#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout<<"base\n";
    }
};

class derived : public base{
    public:
    void show(){
        cout<<"Derived\n";
    }
};

int main(){
    base* arr[2];
    base b;
    derived d;

    arr[0] = &b;
    arr[1] = &d;

    arr[0]->show();
    arr[1]->show();
    return 0;
}