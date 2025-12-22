// constructor overloading

#include<iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"default\n";
    }
    demo(int x){
        cout<<"one parameter\n";
    }
    demo( int x, int y){
        cout<<"two parameters\n";
    }
};

int main(){
    demo d1;
    demo d2(5);
    demo d3(4,5);
    return 0;
}