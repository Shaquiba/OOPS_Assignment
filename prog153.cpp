// program defining user-defined exception class

#include <iostream>
using namespace std;

class myexception {
};

int main(){
    try{
        throw myexception();
    }
    catch (myexception){
        cout<<"user-defined exception caught";
    }
    return 0;
}