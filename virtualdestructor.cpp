// program demonstrating virtual destructor

#include <iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"base destructor\n";
    }
};

class derived : public Base {
    public:
    ~derived(){
        cout<<"derived destructor\n";
    }
};

int main(){
    Base* b = new derived();
    delete b;
    return 0;
}