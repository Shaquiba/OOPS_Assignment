//program to search a record in file

#include <iostream>
using namespace std;
#include<fstream>

struct student{
    int roll;
    char name[20];
};

int main(){
    student s;
    int key;

    ifstream file("stud.dat",ios::binary);
    cout<<"enter roll to search: ";
    cin>> key;

    while(file.read((char*)&s, sizeof(s))) {
        if (s.roll == key) {
            cout<<s.roll<<" "<<s.name;
            break;
        }
    }
    file.close();
    return 0;
}