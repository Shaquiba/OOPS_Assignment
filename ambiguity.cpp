//prohgram showing ambiguity in multiple inheritance

#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<" class A show()"<<endl;
    }
};

class B{
    public:
    void show(){
        cout<< " class B show()"<<endl;
    }
};

class C : public A, public B{};

int main(){
    C c;
    //obj.show(); //ambiguous
    return 0;
}