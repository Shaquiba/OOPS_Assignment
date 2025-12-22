//multiple constructor

#include<iostream>
using namespace std;

class demo{
public:
    demo(){
        cout<<"default constructor\n:";
    }
    demo(int x){
        cout<<"parameterized constructor:"<<x;
    }
};

int main(){
    demo d1;
    demo d2(5);
    return 0;
}