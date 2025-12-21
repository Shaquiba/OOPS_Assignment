// program to read and display employee details using class

#include <iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;
    float salary;
    string department;

    void input()
    {
        cout << "enter id, name, salary, department";
        cin >> id >> name >> salary >> department;
    }

    void display()
    {
        cout << "id:" << id << endl;
        cout << "name:" << name << endl;
        cout << "salary:" << salary << endl;
        cout << "department:" << department << endl;
    }
};

int main()
{
    employee e;
    e.input();
    e.display();
    return 0;
}