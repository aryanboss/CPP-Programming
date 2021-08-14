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

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void deleteNode(node** head_ref, int key)
{
     
    node* temp = *head_ref;
    node* prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;            
        return;
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)
            return;

        prev->next = temp->next;
        delete temp;
    }
}

void printll(node* head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int main(){
    int n,n1;
    node* head = NULL;
    cout<<endl<<"Hey there! from Linked List"<<endl;
    while(true){
        cout<<endl<<"What do you want to do?"<<endl<<"1)Insert element at begining"<<endl<<"2)Insert element at end"<<endl<<"3)Search Element"<<endl<<"4)Delete Element"<<endl;
        cout<<endl<<"Enter Your Choice: ";
        cin>>n;
        if(n==1){
            cout<<"Enter Element ";
            cin>>n1;
            insertatbegin(head,n1);
            cout<<"Your linked list is: ";
            printll(head);
        }
        if(n==2){
            cout<<"Enter Element ";
            cin>>n1;
            insertatend(head,n1);
            cout<<"Your linked list is: ";
            printll(head);
        }
        if(n==3){
            cout<<"Enter Element ";
            cin>>n1;
            search(head,n1);
            cout<<"Your linked list is: ";
            printll(head);
        }
        if(n==4){
            cout<<"Enter Element ";
            cin>>n1;
            deleteNode(&head,n1);
            cout<<"Your linked list is: ";
            printll(head);
        }

    }
    

    
    return 0;
}