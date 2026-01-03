//program using exceptions with inheritance

#include <iostream>
using namespace std;

class base{};
class derived : public base{};

int main(){
    try{
        throw derived();
    }
    catch(base){
        cout<<"base class exception caught";
    }
    return 0;
}