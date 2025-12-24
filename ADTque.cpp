// program implementing ADT queue

#include <iostream>
using namespace std;

class queue{
    int front, rear, arr[5];
    public:
    queue(){
        front = rear = -1;
    }
    void insert (int x){
        if(rear == 4)
        cout<<"queue full/n";
        else{
            if(front == -1)
            front = 0;
            arr[++rear] = x;
        }
    }
    void display(){
        for(int i = front; i<= rear; i++)
        cout<<arr[i]<<" ";
    }
};

int main(){
    queue q;
    q.insert(3);
    q.insert(8);
    q.insert(99);
    q.display();
    return 0;
}