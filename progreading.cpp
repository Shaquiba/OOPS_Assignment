// program reading from a file

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream file("data.txt");
    string text;
    getline(file, text);
    cout<<text;
    file.close();
    return 0;
}