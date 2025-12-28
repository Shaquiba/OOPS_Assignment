// student result processing

#include <iostream>
using namespace std;

class student {
    int roll;
    float m1, m2, m3;
    public:
    void input(){
        cout<<"enter roll and marks:";
        cin>>roll>>m1>>m2>>m3;
    }
    void result(){
        float avg = (m1+m2+m3) / 3;
        cout<<"roll no: "<<roll<<"\naverage: "<<avg<<endl;
    }
};

int main(){
    student s;
    s.input();
    s.result();
    return 0;
}