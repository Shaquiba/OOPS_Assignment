// multiple classes with composition

#include <iostream>
using namespace std;

class engine{
    public:
    void start(){
        cout<<"engine started\n";
    }
};

class car{
    engine e;
    public:
    void run(){
        e.start();
        cout<<"Car running\n";
    }
};

int main(){
    car c;
    c.run();
    return 0;
}