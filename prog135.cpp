// program demonstrating string stream(stringstream)

#include <iostream>
using namespace std;
#include<fstream>
#include<sstream>

int main(){
    string data = "10 20";
    stringstream ss(data);
    int a, b;
    ss>>a>>b;
    cout<<"sum = "<< a+ b;
    return 0;
}