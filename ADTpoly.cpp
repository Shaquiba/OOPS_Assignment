//program implementing ADT polynomial

#include <iostream>
using namespace std;

class polynomial{
    public:
    int coef, exp;
};

int main(){
    polynomial p[2];
    for(int i=0; i<2; i++){
        cout<<"enter coefficient and exponent:";
        cin>>p[i].coef>>p[i].exp;
    }
    for(int i=0; i<2; i++){
        cout<<p[i].coef<<"x^"<<p[i].exp<<" ";
    }
    return 0;
}