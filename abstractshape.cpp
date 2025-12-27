// abstract shape class


#include <iostream>
using namespace std;

class shape{
     public:
     virtual void area() =0;
     };

     class rectangle : public shape{
        public:
        void area(){
            cout<<"area = length * breadth";
        }
     };

     int main(){
        rectangle r;
        r.area();
        return 0;
     }