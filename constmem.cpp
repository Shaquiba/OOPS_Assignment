// program with constant member function

#include <iostream>
using namespace std;

class sample{
    int x;
    public:
    sample(int a){
        x = a;
    }
    void display() const{
        cout<<"value of x:"<<x<<endl;
    }
};

int main(){
    sample s(6);
    s.display();
    return 0;
}