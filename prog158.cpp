//program handling memory allocation failure

#include <iostream>
using namespace std;

int main(){
    try{
        int *p = new int(10000000000);
    }
    catch (bad_alloc){
        cout<<"memory allocation failed";
    }
    return 0;
}