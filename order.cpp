// order of constructor execution
#include<iostream>
using namespace std;

 class A{
    public:
    A(){
        cout<<"A constructor\n";
    }
 };

class B {
    public:
    B(){
        cout<<"B constructor\n";
    }
};

int main(){
    B obj;
    return 0;
}