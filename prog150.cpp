//program catching all exceptions using catch(...)

#include <iostream>
using namespace std;

int main(){
    try{
        throw 5.5;
    }
    catch(...){
        cout<<"exception caught";
    }
    return 0;
}