// program writing to a file

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream file("data.txt");
    file<<"hello file handling";
    file.close();
    return 0;
}

