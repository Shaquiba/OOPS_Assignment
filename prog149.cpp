//program throing multiple types of exceptions

#include <iostream>
using namespace std;

int main(){
    try{
        int x = 1;
        if (x == 1)
        throw x;
        else
        throw "string exception";
    }
    catch(int a){
        cout<<"integer exception";
    }
    catch(const char* s){
        cout<<s;
    }
    return 0;
}