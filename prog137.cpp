// program demonstrating binary file read/write

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    int num = 100;
    ofstream fout("bin.dat",ios::binary);
    fout.write((char*)&num, sizeof(num));
    fout.close();

    ifstream fin("bin.dat",ios::binary);
    fin.read((char*)&num, sizeof(num));
    cout<<num;
    fin.close();
    return 0;
}