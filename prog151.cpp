// program showing stack unwinding

#include <iostream>
using namespace std;

void fun2(){
    throw 10;
}

void fun1(){
    fun2();
}

int main(){
    try{
        fun1();
    }
    catch (int x){
        cout<<"exception caught: "<<x;
    }
    return 0;
}