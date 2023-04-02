#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){  // created a node (     [data|address]      )
        this->data=value;
        this->next=nullptr;
    }
};

void CreateCircularList(node* &head,int value){ // at the right end
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode;
        newnode->next=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}

void ReverseCircularList(node* &head){ // Reverse the Circular Linked List
    if(head==nullptr || head->next==head){
        return;
    }
    node* prev=head;
    node* curr=head->next;
    node* forward=curr->next;
    head->next=nullptr;
    while(forward->next!=head){
        curr->next=prev;
        prev=curr;
        curr=forward;
        forward=curr->next;
    }
    curr->next=prev;
    forward->next=curr;
    head->next=forward;
    head=forward;
}

void display(node* head){
    node* temp=head;
    while(temp->next!=head){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << temp->data << "->";
    cout << temp->next->data <<"\n";
}

int main(){
    node *head=nullptr;
    CreateCircularList(head,1);
    CreateCircularList(head,2);
    CreateCircularList(head,3);
    CreateCircularList(head,4);
    CreateCircularList(head,5);
    display(head);

    //--------------------------------------- Reverse ----------------------------------------
    ReverseCircularList(head);
    display(head);
}