// calcultion of string lenghth

#include <iostream>
using namespace std;

int main()
{
    char str[50];
    cin >> str;

    int len = 0;
    while (str[len] != '\0')
        len++;

    cout << "length is = " << len;
    return 0;
}