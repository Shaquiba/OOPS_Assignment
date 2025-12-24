//program with static data member

#include <iostream>
using namespace std;

class student{
    static int count;
    public:
    student(){
        count++;
    }
    void showcount(){
        cout<<"number of objects: "<<count<<endl;
    }
};

int student::count = 0;

int main(){
    student s1, s2, s3;
    s3.showcount();
    return 0;
}