// program using inheritance for student mark processing

#include <iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void getroll(){
        cout<<"enter roll number:\n";
        cin>>roll;
    }
};

class marks : public student{
    int m1, m2, total;
    public:
    void getmarks(){
        cout<<"enter marks in 2 subjects: ";
        cin>>m1>>m2;
    }

    void display(){
        total = m1+m2;
        cout<<"roll:"<<roll<<"total marks:"<<total;
    }
};

int main(){
   marks m;
   m.getroll();
   m.getmarks();
   m.display();
   return 0;
}