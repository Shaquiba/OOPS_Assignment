//program rethrowing an exception

#include <iostream>
using namespace std;

int main(){
    try{
        try{
            throw 5;
        }
        catch (int x){
            cout<<"caught inside, rethrowing\n";
            throw;
        }
    }
    catch( int y){
        cout<<"caught outside: "<<y;
    }
    return 0;
}