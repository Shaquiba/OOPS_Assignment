#include<iostream>
using namespace std;

int main() {
    float r, b, h, l, w;
    const float pi=3.14;
     
    //circle
    cout<<"enter radius of circle:";
    cin>>r;
    cout<<"area of circle="<< pi*r*r<<endl;

    //triangle
    cout<<"enter base and height of triangle:";
    cin>>b>>h;
    cout<<"area of triangle="<<(b+h)/2<<endl;

    // rectangle
    cout<<"enter lenght and width of rectangle:";
    cin>>l>>w;
    cout<<"the area of rectangle is="<<l*w<<endl;

    return 0;
}