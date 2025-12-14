// swapping with using third variable

#include<iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;

    cout<<"before swapping:\n";
    cout<<"a="<<a<<",b="<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nafter swapping the numbers are:\n";
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}