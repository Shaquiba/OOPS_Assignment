//program for single inheritance

#include <iostream>
using namespace std;

class A{
    public:
    void showA() {
        cout<<"this is base class A"<<endl;
    }
};

class B: public A{
    public:
    void showB() {
        cout<<"this is derived class B"<<endl;
    }
};

int main(){
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}