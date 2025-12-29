// program demonstrating file creation

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream file("test.txt");
    file.close();
    return 0;
}