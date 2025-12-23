// operator overloading using friend function

#include <iostream>
using namespace std;

class num{
    int x;
    public:
    num(int a){
        x = a;
    }
    friend num operator +(num, num);
    void show(){
        cout<<x;
    }
};

    num operator +(num a, num b){
        return num(a.x + b.x);
    }

    int main(){
        num n1(10), n2(70);
        num n3 = n1 + n2;
        n3.show();
        return 0;
    }
