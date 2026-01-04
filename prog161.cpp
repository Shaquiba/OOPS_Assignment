//program demonstrating exception propagation

#include <iostream>
using namespace std;

void fun3(){
    throw 10;
}

void fun2(){
    fun3();
}

void fun1(){
     fun2();
}

int main(){
    try{
        fun1();
    }
    catch (int e){
        cout<<"exception caught in main:"<<e<<endl;
    }
    return 0;
}