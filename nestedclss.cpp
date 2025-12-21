//nested class
#include <iostream>
using namespace std;

class outer {
    public:
    class inner{
        public:
        void show(){
            cout<<"inner class";
        }
    };
};

int main(){
    outer::inner obj;
    obj.show();
    return 0;
}