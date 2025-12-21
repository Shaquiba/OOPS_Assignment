// compare two objects

#include <iostream>
using namespace std;

class number
{
public:
    int value;
};

int main()
{
    number n1, n2;
    n1.value = 10;
    n2.value = 90;

    if (n1.value > n2.value)
        cout << "first number is greater";
    else
        cout << "second number is greater";
    return 0;
}