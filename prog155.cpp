// program handling array out of bound exception

#include <iostream>
using namespace std;

int main(){
    int a[5] ={1,2,3,4,5};
    try{
        int index = 10;
        if (index >= 5)
        throw index;
        cout<<a[index];
    }
    catch(int){
        cout<<"array index out of bound";
    }
    return 0;
}