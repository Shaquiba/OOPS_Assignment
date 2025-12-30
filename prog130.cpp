// program to append data to a file

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream file("data.txt",ios::app);
    file<<"\nAppending ne data.";
    file.close();
    return 0;
}