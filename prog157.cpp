// program handling constructor exceptions

#include <iostream>
using namespace std;

class test{
    public:
    test(){
        throw 10;
    }
};

int main(){
    try{
        test t;
    }
    catch (int){
        cout<<"exception in constructor";
    }
    return 0;
}