// friend function accessing private data

#include <iostream>
using namespace std;

class sample{
    int x;
    public:
    sample(int a){
         x= a;
    }
    friend void show(sample);
};

void show(sample s){
    cout<<"the private valuen of x="<<s.x;
}

int main(){
    sample s(5);
    show(s);
    return 0;
}