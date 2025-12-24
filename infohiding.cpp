// program demonstrating information hiding

#include <iostream>
using namespace std;

class account{
    private:
    int balance;
    public:
    void setbalance(int b){
        balance = b;
    }
    int getbalance(){
        return balance;
    }
};

int main(){
    account a;
    a.setbalance(34560000);
    cout<<"balance: "<<a.getbalance();
    return 0;
}