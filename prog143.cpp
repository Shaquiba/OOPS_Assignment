// program splitting a file into two

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream fin("source.txt");
    ofstream f1("part1.txt");
    ofstream f2("part2.txt");

    char ch;
    int count = 0;

    while(fin.get(ch)){
        if(count%2==0)
        f1<<ch;
        else
        f2<<ch;
        count++;
    }
    fin.close();
    f1.close();
    f2.close();
    return 0;
}