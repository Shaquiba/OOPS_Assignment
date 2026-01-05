// program implementing custom stack exception

#include <iostream>
using namespace std;

class stackoverflow{
};

int main(){
    int stack[5], top = -1;

    try{
        for (int i=0;i<6;i++){
            if (top == 4)
            throw stackoverflow();
            stack[++top] = i;
        }
    }
    catch(stackoverflow){
        cout<<"stack overflow exception"<<endl;
    }
    return 0;
}