// program showing constructor order in inheritance

#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"constructor of class A\n";
    }
};

class B: public A{
    public:
    B(){
        cout<<"constructor of class B\n";
    }
};

int main(){
    B b;
    return 0;
}