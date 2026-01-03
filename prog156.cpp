// program with nested try blocks

#include <iostream>
using namespace std;

int main(){
    try{
        try{
            throw 1;
        }
        catch (int){
            cout<<"inner catch\n";
            throw;
        }
    }
    catch (int){
        cout<<"outer catch";
    }
    return 0;
}