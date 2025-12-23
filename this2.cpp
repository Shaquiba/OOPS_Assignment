//differentiate local and member variables using this ->

#include <iostream>
using namespace std;

class test{
    int a;
    public:
    void set(int a){
        this -> a= a;
    }
    void show(){
        cout<<"the value of a ="<<a;
    }
};

int main(){
    test t;
    t.set(20);
    t.show();
    return 0;
}