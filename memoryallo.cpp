// dynamic memory allocation in constructor

#include<iostream>
using namespace std;

class demo{
    int *ptr;
    public:
    demo(){
        ptr = new int;
        *ptr =10;
    }
    void show(){
        cout<<*ptr;
    }
    ~demo(){
        delete ptr;
    }
};

int main(){
  demo d;
  d.show();
  return 0;
}