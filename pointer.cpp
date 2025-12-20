#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "value of a = " << a << endl;
    cout << "address of a = " << p << endl;
    cout << "value using pointer = " << p;
    return 0;
}