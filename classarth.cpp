// arithmetic operations using class

#include <iostream>
using namespace std;

class arithmetic
{
public:
    int a, b;

    void input()
    {
        cin >> a >> b;
    }

    void operation()
    {
        cout << "add:" << a + b << endl;
        cout << "sub:" << a - b << endl;
        cout << "mul:" << a * b << endl;
        cout << "div:" << a / b << endl;
    }
};

int main()
{
    arithmetic a;
    a.input();
    a.operation();
    return 0;
}