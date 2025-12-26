//program using inheritance for employee payroll

#include <iostream>
using namespace std;

class employee{
    protected:
    int id;
    public:
    void getid(){
        cout<<"enter employee id:";
        cin>>id;
    }
};

class pay : public employee{
    float salary;
    public:
    void getsal(){
        cout<<"enter salary:";
        cin>>salary;
    }
    void show(){
        cout<<"id:"<<"\nsalary : "<<salary;
    }
};

int main(){
    pay e;
    e.getid();
    e.getsal();
    e.show();
    return 0;
}