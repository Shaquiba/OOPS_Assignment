// program implementing login system ith error exceptions

#include <iostream>
using namespace std;
#include<string>

int main(){
    string username, password;

    try{
        cout<<"enter username: ";
        cin>>username;
        cout<<"enter password: ";
        cin>>password;

        if(username!= "admin" || password != "1234")
        throw "login failed";

        cout<<"login successfull!"<<endl;
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;
}