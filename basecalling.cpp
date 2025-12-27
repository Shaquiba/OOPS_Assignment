// pointer to base calling derived function

#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout<<"base show";
    }
};

class derived : public base {
    public: 
    void show(){
        cout<<"derived show";
    }
};

int main(){
    base* b;
    derived d;
    b = &d;
    b->show();
    return 0;
}