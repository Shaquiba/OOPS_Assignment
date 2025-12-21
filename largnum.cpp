// largest number using class

#include <iostream>
using namespace std;

class largest{
    public:
    int a, b;
     
    void input(){
        cin>>a>>b;
    }

    void largestnum(){
     if (a>b)
     cout<<"largest="<<a;
     else
     cout<<"largest="<<b;
    }
};

int main(){
    largest l;
    l.input();
    l.largestnum();
    return 0;
}