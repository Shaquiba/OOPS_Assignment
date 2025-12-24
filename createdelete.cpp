// program dynamic object creation and deletion using new/delete

#include <iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"object creation\n";
    }
    ~demo(){
        cout<<"object deleted\n";
    }
};

int main(){
    demo* d = new demo();
    delete d;
    return 0;
}