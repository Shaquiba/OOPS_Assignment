//program to count number of objects using static variable

#include <iostream>
using namespace std;

class Count{
    static int count;
    public:
    Count(){
        count++;
    }
    static void showCount(){
        cout<<"number of objects="<<count;
    }
};

int  Count::count=0;

int main(){
    Count c1, c2, c3;
    Count::showCount();
    return 0;
}