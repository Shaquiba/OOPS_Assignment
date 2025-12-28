// online shopping cart

#include <iostream>
using namespace std;

class cart{
    int items;
    public:
    cart(){
        items = 0;
    }
    void additem(){
        items++;
    }
    void show(){
        cout<<"items in cart: "<<items<<endl;
    }
};

int main(){
    cart c;
    c.additem();
    c.additem();
    c.show();
    return 0;
}