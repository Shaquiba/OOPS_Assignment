// program storing and retrieving structures in binary file

#include <iostream>
using namespace std;
#include<fstream>

struct employee{
    int id;
    char name[20];
};

int main(){
    employee e = {101, "shaquiba"};

    ofstream fout("emp.dat",ios::binary);
    fout.write((char*)&e, sizeof(e));
    fout.close();

    ifstream fin("emp.dat", ios::binary);
    fin.read((char*)&e, sizeof(e));
    cout<<e.id<<" "<<e.name;
    fin.close();
    return 0;
}