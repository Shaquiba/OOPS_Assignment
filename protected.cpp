// program demonstrating protected inheritance

#include <iostream>
using namespace std;

class A{
    protected:
    int x = 10;
};

class B : protected A {
    public:
    void show(){
        cout<<"value of x = "<<endl;
    }
};

int main(){
    B obj;
    obj.show();
    return 0;
}