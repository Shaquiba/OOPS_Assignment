#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter a and b:";
    cin>>a>>b;

    int max =(a>b)?a:b;
    cout<<"greater number="<<max;
    return 0;
}