// program merging two files

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream f1("file1.txt");
    ifstream f2("file2.txt");
    ifstream f3("merge.txt");
    char ch;

    while(f1.get(ch))
    f3>>ch;
    while(f2.get(ch))
    f3>>ch;

    f1.close();
    f2.close();
    f3.close();

    cout<<"files merged successfully";
    return 0;
}