//program with static member function

#include <iostream>
using namespace std;

class demo{
    static int x;
    public:
    static void show(){
        cout<<"value of x: "<<x<<endl;
    }
};

int demo::x = 10;

int main(){
    demo::show();
    return 0;
}