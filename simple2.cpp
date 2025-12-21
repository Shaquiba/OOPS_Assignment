// program with private and public members

#include <iostream>
using namespace std;

class person
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }
    void showAge()
    {
        cout << "age:" << age << endl;
    }
};

int main()
{
    person p;
    p.setAge(20);
    p.showAge();
    return 0;
}