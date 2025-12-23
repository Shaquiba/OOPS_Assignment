// program demonstrating this pointer

#include <iostream>
using namespace std;

class demo{
    int x;
    public:
    void set(int x){
        this ->x = x;
    }
    void show(){
        cout<<"value of x:"<<x;
    }
};

int main(){
    demo d;
    d.set(10);
    d.show();
    return 0;
}