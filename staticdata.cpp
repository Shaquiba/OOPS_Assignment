// initializing static data member

#include <iostream>
using namespace std;

class demo
{
public:
    static int x;
};

int demo::x = 10;

int main()
{
    cout << demo::x;
    return 0;
}