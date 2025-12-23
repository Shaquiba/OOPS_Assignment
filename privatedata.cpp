// compare private data of two class using friend

#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    friend void compare(A, B);
};

class B
{
    int y;

public:
    B(int b)
    {
        y = b;
    }
    friend void compare(A, B);
};

void compare(A a, B b)
{
    if (a.x > b.y)
        cout << "A is greater";
    else
        cout << "B is greater";
}

int main()
{
    A a(56);
    B b(87);
    compare(a, b);
    return 0;
}