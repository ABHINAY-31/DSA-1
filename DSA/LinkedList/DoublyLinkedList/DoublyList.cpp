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
void display(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << temp->data << "\n";
    cout << head->next->next->prev->data << "\n";
}
int main(){
    node* head=nullptr;
    CreatedoublyLinkedList(head,1);
    CreatedoublyLinkedList(head,2);
    CreatedoublyLinkedList(head,3);
    CreatedoublyLinkedList(head,4);
    CreatedoublyLinkedList(head,5);
    display(head);
}