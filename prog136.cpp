// program checking if file exists

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream file("student.txt");
    if (file)
    cout<<"file exists";
    else
    cout<<"file does not exist";
    return 0;
}