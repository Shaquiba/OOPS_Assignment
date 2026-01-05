// program with multiple catch blocks for same try

#include <iostream>
using namespace std;

int main(){
    try{
        int choice;
        cout<<"enter 1 (int) or 2(char): ";
        cin>>choice;
        if (choice == 1)
        throw 10;
        else if( choice == 2)
        throw 'A';
        else
        throw 1.5;
    }
    catch(int e){
        cout<<"integer exception: "<<e<<endl;
    }
    catch(char c){
        cout<<"character exception: "<<c<<endl;
    }
    catch(...){
        cout<<"unknown exception caught"<<endl;
    }
    return 0;
}