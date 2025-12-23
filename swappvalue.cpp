// swapping private value using friend

#include <iostream>
using namespace std;

class B;

class A{
    int x;
    public:
    A(int a){
        x = a;
    }
    friend void swap(A&, B&);
    void show(){
        cout<<"A ="<<x<<endl;
    }
};

class B{
    int y;
    public:
    B(int b){
        y= b;
    }
    friend void swap(A&, B&);
    void show(){
        cout<<"B="<<y<<endl;
    }
};

void swap(A &a, B &b){
    int temp = a.x;
    a.x=b.y;
    b.y=temp;
}

int main(){
    A a(8);
    B b(89);
    swap(a,b);
    a.show();
    b.show();
    return 0;
}