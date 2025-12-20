#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter three numbers:";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
            cout << "a is largest";
        else
            cout << "c is largest";
    }
    else
    {
        if (b > c)
            cout << "b is the largest";
        else
            cout << "c is the largest";
    }
    return 0;
}