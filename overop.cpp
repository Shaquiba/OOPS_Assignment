// program demonstrating operator overloading

#include <iostream>
using namespace std;

class num{
    public:
    int x;
    void get(){
        cin>>x;
    }
    num operator +(num n){
        num temp;
        temp.x = x + n.x;
        return temp;
    }
};

int main(){
    num a, b, c;
    a.get();
    b.get();
    c = a+b;
    cout<<"sum = "<<c.x;
    return 0;
}