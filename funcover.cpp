//program demonstrating function overloading

#include <iostream>
using namespace std;

class Add{
    public:
    int sum(int a, int b){
        return a + b;
    }
    int sum(int a, int b, int c){
        return a + b + c;
    }
};

int main(){
    Add a;
    cout<<a.sum(10,20)<<endl;
    cout<<a.sum(80,87,65);
    return 0;
}