// program ith destructor

#include<iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"constructor called\n";
    }
    ~demo(){
        cout<<"destructor called\n";
    }
};

int main(){
    demo d;
    return 0;
}