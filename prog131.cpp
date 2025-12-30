// program using file opening modes

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream file("modes.txt",ios::out|ios::app);
    file<<"using file opening modes\n";
    file.close();
    return 0;
}