#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

void insertatbegin(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head = n;
}

void insertatend(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

int main(){
    
    return 0;
}