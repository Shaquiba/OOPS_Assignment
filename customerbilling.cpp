// customer billing system

#include <iostream>
using namespace std;

class bill{
    int units;
    public:
    void input(){
        cout<<"enter units: ";
        cin>>units;
    }
    void calculate(){
        float amt = units * 6;
        cout<<"total bill : "<<amt<<endl;
    }
};

int main(){
    bill b;
    b.input();
    b.calculate();
    return 0;
}