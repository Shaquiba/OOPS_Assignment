// aggregation of objects

#include <iostream>
using namespace std;

class address{
    public:
    string city;
    address(string c){
        city = c;
    }
};

class person{
    address* addr;
    public:
    person(address* a){
        addr = a;
    }
    void show(){
        cout<<"city: "<<addr->city<<endl;
    }
};

int main(){
    address a("delhi");
    person p(&a);
    p.show();
    return 0;
}