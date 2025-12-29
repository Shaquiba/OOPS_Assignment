// program copying content from one file to another

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream source("data.txt");
    ofstream dest("copy.txt");

    char ch;
    while (source.get(ch)){
        dest.put(ch);
    }

    source.close();
    dest.close();
    return 0;
}