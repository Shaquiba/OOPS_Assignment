// program implementing ADT stack

#include <iostream>
using namespace std;
 
class stack{
    int top, arr[5];
    public:
    stack(){
        top = -1;
    }
    void push(int x){
        if (top==4)
        cout<<"stack overflow\n";
        else
        arr[++top] = x;
    }
    void pop(){
        if(top == -1)
        cout<<"stack underflow\n";
        else
        top--;
    }
    void display(){
        for (int i=top; i>=0; i--)
        cout<<arr[i]<<" ";
    }
};

int main(){
    stack s;
    s.push(30);
    s.push(88);
    s.push(74);
    s.display();
    return 0;
}