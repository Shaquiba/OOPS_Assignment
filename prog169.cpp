// program implementing bank withdrawal exception

#include <iostream>
using namespace std;

class insbalance{
};

int main(){
    int balance = 5000, withraw;

    try{
        cout<<"enter withdrawal amount:";
        cin>>withraw;

        if (withraw> balance)
        throw insbalance();

        balance -= withraw;
        cout<<"withdraal successfull!"<<endl;
        cout<<"Remaining balance: "<<balance<<endl;
    }
    catch(insbalance){
        cout<<"insufficient balance!"<<endl;
    }
    return 0;
}