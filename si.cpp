#include<iostream>
using namespace std;

int main() {
    float p, r, t, si;
    cout<<"enter principal:";
    cin>>p;
    cout<<"enter rate:";
    cin>>r;
    cout<<"enter time period:";
    cin>>t;

    si = (p*r*t)/100;

    cout<<"the calculated simple interest is:"<<si;

    return 0;
}