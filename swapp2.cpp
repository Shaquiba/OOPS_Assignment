//swapping numbers without using third variable

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;

    // before swapping
    cout<<"\nbefore swapping:\n";
    cout<<"a="<<a<<",b="<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    // after swapping
    cout<<"\nafter swapping:\n";
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}