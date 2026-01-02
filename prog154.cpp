// program handling division by zero exception
#include <iostream>
using namespace std;

int main(){
    try{
        int a = 10, b = 0;
        if (b == 0)
        throw b;
        cout<<a/b;
    }
    catch(int){
        cout<<"division by zero error";
    }
    return 0;
}