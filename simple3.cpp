// program to demonstrate class member functions

#include <iostream>
using namespace std;

class claculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    claculator c;
    cout << "sum = " << c.add(9, 10);
    return 0;
}