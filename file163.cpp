//program validating user input using exceptions

#include <iostream>
using namespace std;

int main(){
    int age;
    try{
        cout<<"enter age: ";
        cin>>age;

        if (age<0 || age> 120)
        throw age;

        cout<<"valid age entered: "<<age<<endl;
    }
    catch(int){
        cout<<"invalid age entered!"<<endl;
    }
    return 0;
}