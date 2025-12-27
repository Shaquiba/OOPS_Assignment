// implications of polymorphism

#include <iostream>
using namespace std;

class animal{
    public:
    virtual void sound(){
        cout<<"animal sound";
    }
};

class dog : public animal{
    public:
    void sound(){
        cout<<"dog barks";
    }
};

int main(){
    animal* a;
    dog d;
    a = &d;
    a->sound();
    return 0;
}