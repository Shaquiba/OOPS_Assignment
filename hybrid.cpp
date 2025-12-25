// program for hybrid inheritance

#include <iostream>
using namespace std;

class A{
    public:
    void showA(){
        cout<<"class A"<<endl;
    }
};

class B : public A{};
class C : public A{};

class D: public B, public C{
    public:
    void showD(){
        cout<<"class D"<<endl;
    }
};

int main(){
    D d;
    d.showD();
    return 0;
}