// program counting words in a file

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream file("data.txt");
    string word;
    int count = 0;

    while (file>>word){
        count++;
    }
    cout<<"word count = "<<count;
    file.close();
    return 0;
}