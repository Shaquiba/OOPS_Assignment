// program formatted I/O with manipulators

#include <iostream>
using namespace std;
#include<iomanip>

int main(){
    cout<<setw(10)<<"name"<<setw(10)<<"marks"<<endl;
    cout<<setw(10)<<"aman"<<setw(10)<<setprecision(3)<<67.987;
    return 0;
}