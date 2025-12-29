//program demonstrating formatted output using setw() and setprecision()

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    float num = 123.768;
    cout<<setw(10)<<num<<endl;
    cout<<fixed<<setprecision(2)<<num;
    return 0;
}
