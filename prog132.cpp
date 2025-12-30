//program reading/writing objects to a file

#include <iostream>
using namespace std;
#include<fstream>

class student{
    public:
    int roll;
    char name[20];
};

int main(){
    student s = {1, "aman"};
    ofstream fout("obj.dat",ios::binary);
   fout.write((char*)&s,sizeof(s));

   ifstream fin("obj.dat",ios::binary);
   fin.read((char*)&s, sizeof(s));
   cout<<s.roll<<" "<<s.name;
   fin.close();
   return 0;
}