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
void CreateList(node* &head,int value){ // insertion in the List
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

void ReverseList(node* &head){ // reverse the List
    if(head==nullptr || head->next==head){
        return;
    }
    node* curr=head;
    node* forward=head->next;
    while(forward->next!=head){
        curr->next=curr->prev;
        curr->prev=forward;
        curr=forward;
        forward=forward->next;
    }
    curr->next=curr->prev;
    curr->prev=forward;
    forward->next=curr;
    forward->prev=head;
    head=forward;
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

    //------------------------------- Reverse ------------------------------------
    ReverseList(head);
    display(head);
}