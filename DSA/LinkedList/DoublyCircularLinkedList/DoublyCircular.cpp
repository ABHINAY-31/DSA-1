#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        this->data=value;
        this->prev=nullptr;
        this->next=nullptr;
    }
};
void CreateList(node* &head,int value){
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode;
        newnode->next=head;
        newnode->prev=head;return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    head->prev=newnode;
    newnode->prev=temp;
    newnode->next=head;
}
// Insertion at specified position in linked list
void InsertAtPos(node* &head,int value,int pos){ 
    if(pos==1){
        CreateList(head,value);
    }
    node* temp=head;
    while(pos>2 && temp->next!=head){
        pos--;
        temp=temp->next;
    }
    if(pos>2){
        cout <<"Wrong position: -1" << endl;
        return;
    }
    node* newnode=new node(value);
    node* forward=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=forward;
    forward->prev=newnode;
}

// deletion at specified position in Doubly Circular linked list 
void Deletion(node* &head,int pos){
    if(pos==1 && head->next==head){
        head=nullptr;
        return;
    }
    else if(pos==1 && head->next!=head){
        node* temp=head;
        head=head->next;
        temp->next=nullptr;
        head->prev=temp->prev;
        temp->prev->next=head;
        return;
    }
    node* temp1=head;
    while(pos>2 && temp1->next!=head){
        pos--;
        temp1=temp1->next;
    }
    node* del=temp1->next;
    temp1->next=del->next;
    del->next->prev=temp1;
    // delete(del);
}

void display(node* head){
    node* temp=head;
    while(temp->next!=head){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << temp->data << "\n";
    // cout << temp->next->data << "->";
    // cout << temp->next->next->prev->data << "->";
    // cout << temp->next->prev->data << "\n";
}
int main(){
    node* head=nullptr;
    CreateList(head,1);
    CreateList(head,2);
    CreateList(head,3);
    CreateList(head,4);
    CreateList(head,5);
    display(head);


    //----------------------------Insert By Position ------------------------------
    InsertAtPos(head,10,3);
    display(head);
    InsertAtPos(head,14,7);
    display(head);
    InsertAtPos(head,14,9);
    display(head);

    //---------------------------- Deletion By Position -------------------------------------
    Deletion(head,3);
    display(head);
    Deletion(head,4);
    display(head);
    Deletion(head,1);
    display(head);
}