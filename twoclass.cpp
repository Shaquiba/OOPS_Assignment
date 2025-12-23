// two classes with a common friend function

#include <iostream>
using namespace std;

class A;
class B;

class A{
    int x;
    public:
    A(int a){
        x = a;}
        friend void add(A, B);
    };

    class B{
        int y;
        public:
        B(int b){
            y = b;}
            friend void add(A, B);
        };

        void add( A a, B b) {
        cout<<"sum = "<<a.x + b.y;
    }

    int main(){
        A a(10);
        B b(20);
        add(a,b);
        return 0;
    }
