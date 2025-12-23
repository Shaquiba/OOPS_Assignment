// program showing friendship is not mutual

#include <iostream>
using namespace std;

class B;

class A{
    int x;
    public:
    A(){
        x =100;
    }
    friend class B;
};

class B{
    public:
   void show(A a){
    cout<<"Accessing A's data is ="<<a.x;
   }
};

int main(){
    A a;
    B b;
    b.show(a);
    return 0;
}