// program reading full sentence using getline()

#include <iostream>
#include<string>
using namespace std;

int main(){
    string sentence;
    cout<<"enter your sentence: ";
    getline(cin,sentence);
    cout<<"your sentence: "<<sentence;
    return 0;
}