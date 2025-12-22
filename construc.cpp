//program with default constructor

#include<iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"default constructor called";
    }
};

int main(){
    demo d;
    return 0;
}