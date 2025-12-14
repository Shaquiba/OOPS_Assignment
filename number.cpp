#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    if(n>0)
    cout<<"positive number";
    else if(n<0)
    cout<<"negative number";
    else
    cout<<"zero";

    return 0;
}