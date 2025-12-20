#include <iostream>
using namespace std;

int main()
{
    int i = 1;

start:
    if (i <= 5)
    {
        cout << i << " ";
        i++;
        goto start;
    }
    return 0;
}