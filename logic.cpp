#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;

    cout<<(a<b && b>0)<<endl;
    cout<<(a>b || b>0)<<endl;
    cout<<!(a>b)<<endl;

    return 0;
}