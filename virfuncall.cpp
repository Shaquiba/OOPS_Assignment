// virtual function call mechanism

#include <iostream>
using namespace std;

class test{
    public:
    virtual void print(){
        cout<<"virtual function called";
    }
};

int main(){
    test t;
    test* ptr = &t;
    ptr->print();
    return 0;
}