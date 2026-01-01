//program throwing an integer exception

#include <iostream>
using namespace std;

int main(){
    try{
        throw 10;
    }
    catch (int x){
        cout<<"integer exception caught"<<x;
    }
    return 0;
}