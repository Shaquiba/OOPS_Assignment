// program implementing ADT linked list

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

int main(){
    node *head = new node();
    head->data = 10;
    head->next = new node();
    head->next->data = 29;
    head->next->next = NULL;

    node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}