// program with pure virtual function and abstract class

#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw() = 0;
};

class circle : public shape{
    public:
    void draw(){
        cout<<"drawing circle\n";
    }
};

int main(){
    shape *s;
    circle c;
    s = &c;
    s ->draw();
    return 0;
}