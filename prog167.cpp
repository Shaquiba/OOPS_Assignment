// program catching exceptions thron by new operator

#include <iostream>
using namespace std;

int main(){
    try{
        int* arr = new int [100000000];
        delete[] arr;
    }
    catch(bad_alloc& e){
        cout<<"memory allocation failed!"<<endl;
    }
    return 0;
}