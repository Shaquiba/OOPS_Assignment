//program throwing string exception

#include <iostream>
using namespace std;

int main(){
    try{
        throw "error occured";
    }
    catch(const char* msg){
        cout<<msg;
    }
    return 0;
}