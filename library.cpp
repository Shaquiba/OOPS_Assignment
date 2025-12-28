// library management system 

#include <iostream>
using namespace std;

class book{
    string title;
    int id;
    public:
    book(string t, int i){
        title = t;
        id = i;
    }
    void display(){
        cout<<"book id:"<<id<<"\ntitle:"<<title<<endl;
    }
};

int main(){
    book b("c++ programming",1);
    b.display();
    return 0;
}