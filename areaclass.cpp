// calaculating area using class object

#include <iostream>
using namespace std;

class area{
    public:
    int l, b;

    void input()
    {
        cin>>l>>b;
    }

    void arearec(){
        cout<<"area="<<l*b;
    }
};

int main(){
    area r;
    r.input();
    r.arearec();
    return 0;
}