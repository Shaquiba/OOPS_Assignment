//program to store student data using file handling 

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    int roll;
    char name[20];

    ofstream file("student.txt");
    cout<<"enter roll and name:";
    cin>>roll>>name;
    file<<roll<<" "<<name;
    file.close();
    return 0;
}