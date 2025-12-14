#include<iostream>
using namespace std;

int main() {
    const float pi=3.14159;
    float rad , area;

    cout<<"enter radius:";
    cin>>rad;

    area= pi*rad*rad;
    cout<<"the calculated area is:"<<area<<endl;
    return 0;

}