#include <iostream>
using namespace std;

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    student s;

    cin >> s.roll >> s.name >> s.marks;

    cout << "roll no = " << s.roll << endl;
    cout << "name of student = " << s.name << endl;
    cout << "marks obtained = " << s.marks;

    return 0;
}