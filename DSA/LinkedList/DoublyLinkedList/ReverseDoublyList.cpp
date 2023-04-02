#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int value){
        this->data=value;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

void CreatedoublyLinkedList(node* &head,int value){
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void Reverse(node* &head){
    if(head==nullptr || head->next==nullptr){
        return;
    }
    node*curr=head;
    node*forward=curr->next;
    while(forward!=nullptr){
        curr->next=curr->prev;
        curr->prev=forward;
        curr=forward;
        forward=curr->next;
    }
    curr->next=curr->prev;
    curr->prev=forward;
    head=curr;
}
void display(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << temp->data << "\n";
}
int main(){
    node* head=nullptr;
    CreatedoublyLinkedList(head,1);
    CreatedoublyLinkedList(head,2);
    CreatedoublyLinkedList(head,3);
    CreatedoublyLinkedList(head,4);
    CreatedoublyLinkedList(head,5);
    display(head);

    // ------------------------- Reverse the List ---------------------------
    Reverse(head);
    // cout << head->data << "\n";
    display(head);
}