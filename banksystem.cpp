// bank account system using OOP

#include <iostream>
using namespace std;

class bankaccount{
    int accno;
    float balance;
    public:
    bankaccount(int a, float b){
        accno = a;
        balance = b;
    }
    void deposit(float amt){
        balance+=amt;
    }
    void withdraw(float amt) {
        if(amt<=balance)
        balance -= amt;
        else
        cout<<"insufficient balance\n";
    }
    void display(){
        cout<<"account no: "<<accno<<"\nbalance: "<<balance<<endl;
    }
};

int main(){
    bankaccount b(100, 6000);
    b.deposit(3000);
    b.withdraw(500);
    b.display();
    return 0;
}