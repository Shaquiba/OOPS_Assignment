#include <iostream>
using namespace std;

int main()
{
    int choice;
    cin >> choice;
    cout << "Enter your choice:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    switch (choice)
    {
    case 1:
        cout << "addition";
        break;
    case 2:
        cout << "subtraction";
        break;
    case 3:
        cout << "multiplication";
        break;
    case 4:
        cout << "division";
        break;
    default:
        cout << "invalid choice";
    }
    return 0;
}