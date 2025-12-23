// addig two complex numbers using friend

#include <iostream>
using namespace std;

class complex{
    int r, i;
    public:
    complex(int a, int b){
        r=a;
        i=b;
    }
    friend complex add(complex, complex);
    void show(){
        cout<<r<<"+"<<i<<"i";
    }
};

complex add(complex c1, complex c2){
    return complex(c1.r + c2.r, c1.i +c2.i);
}

int main(){
    complex c1(2,5), c2(90,10);
    complex c3= add(c1,c2);
    c3.show();
    return 0;
}