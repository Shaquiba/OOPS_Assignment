// program performing safe file operations using exceptions

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    try{
        ifstream file("data.txt");
        if (!file)
        throw "file cannot be opened";
        cout<<"file opened successfully"<<endl;
        file.close();
    }
    catch(const char* msg){
        cout<<"error: "<<msg<<endl;
    }
    return 0;
}