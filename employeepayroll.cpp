//employee payroll system

#include <iostream>
using namespace std;

class employee{
    int id;
    float salary;
    public:
    employee(int i, float s){
        id = i;
        salary = s;
    }
    void show(){
        cout<<"id: "<<id<<"\nsalary"<<salary<<endl;
    }
};

int main(){
    employee e(1101, 890000);
    e.show();
    return 0;
}