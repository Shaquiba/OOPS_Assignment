#include <iostream>
using namespace std;

int main()
{
    char str1[50], str2[50];
    cout<<"Enter string:";
    cin >> str1;

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] != '\0';

    cout << "copied string = " << str2;
    return 0;
}