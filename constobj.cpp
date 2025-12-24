//program with constant object

#include <iostream>
using namespace std;

class test{
    public:
    void show() const{
        cout<<"this is a constant object function"<<endl;
    }
};

int main(){
    const test t;
    t.show();
    return 0;
}