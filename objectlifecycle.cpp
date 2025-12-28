// object life cycle demonstration

#include <iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"constructor called\n";
    }
    ~demo(){
        cout<<"Destructor called\n";
    }
};

int main(){
    demo d;
    cout<<"inside main\n";
    return 0;
}