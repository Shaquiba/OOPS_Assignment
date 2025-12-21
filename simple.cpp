#include <iostream>
using namespace std;

class student
{
public:
    int roll;
    string name;
    float marks;
};

int main()
{
    student s1;
    s1.roll = 34;
    s1.name = "shaquiba";
    s1.marks = 98.7;

    cout << "roll no:" << s1.roll << endl;
    cout << "name of student: " << s1.name << endl;
    cout << "marks obtained:" << s1.marks << endl;
    return 0;
}
