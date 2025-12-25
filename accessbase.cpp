// program to acces base class members using derived class

#include <iostream>
using namespace std;

class A{
    public:
    int x = 4;
};

class B : public A{
    public:
    void show(){
        cout<<"value of x ="<<endl;
    }
};

int main(){
    B b;
    b.show();
    return 0;
}