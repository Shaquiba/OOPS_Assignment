// program with copy constructor

#include<iostream>
using namespace std;

class demo{
    public:
    int x;
    demo(int a){
        x=a;
    }
    demo( demo &obj){
        x= obj.x;
    }
};

int main(){
    demo d1(10);
    demo d2(d1);
    cout<<d2.x;
    return 0;
}