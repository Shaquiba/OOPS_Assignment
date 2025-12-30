//program to update a record in file

#include <iostream>
using namespace std;
#include<fstream>

struct student {
    int roll;
    char name[20];
};

int main(){
    fstream file("stud.dat",ios::in | ios::out | ios::binary);
    student s;
    int key;

    cout<<"enter roll to update:";
    cin>>key;

    while(file.read((char*)&s, sizeof(s))){
        if(s.roll == key){
            cout<<"enter new name:";
            cin>>s.name;
            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s,sizeof(s));
            break;
        }
    }
    file.close();
    return 0;
}