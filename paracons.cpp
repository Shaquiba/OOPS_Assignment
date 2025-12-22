// parameterized constructor

#include<iostream>
using namespace std;

class demo{
    public:
    int x;
    demo(int a){
        x=a;
    }
};

int main(){
    demo d(10);
    cout<<d.x;
    return 0;
}