// initializing const data member

#include<iostream>
using namespace std;

class demo{
    const int x;
    public:
    demo(int a): x(a){}
    void show(){
        cout<< x;
    }
};

int main(){
    demo d(5);
    d.show();
    return 0;
}