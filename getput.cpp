// program demonstrating get() and put()

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: ";
    ch = cin.get();
    cout<<"your character : ";
    cout.put(ch);
    return 0;
}