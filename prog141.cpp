//program deleting a record in file

#include <iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream fin("data.txt");
    ofstream fout("temp.txt");
    int id, deid;
    cout<<"enter id to delete :";
    cin>>deid;

    while(fin>>id){
        if(id != deid)
        fout<<id<<endl;
    }

    fin.close();
    fout.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");

    cout<<"Record deleted successfully";
    return 0;
}