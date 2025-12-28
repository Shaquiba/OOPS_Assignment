// product inventory OOP model

#include <iostream>
using namespace std;

class product{
    int pid, qty;
    public:
    product(int p, int q){
        pid = p;
        qty = q;
    }
    void display(){
        cout<<"product id: "<<pid<<"\nquantity: "<<qty<<endl;
    }
};

int main(){
    product p(400,30);
    p.display();
    return 0;
}