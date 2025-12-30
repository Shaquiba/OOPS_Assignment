// program reading until EOF

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream file("student.txt");
    char ch;

    while(file.get(ch)){
        cout<<ch;
    }
    file.close();
    return 0;
}