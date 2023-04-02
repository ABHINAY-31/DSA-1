/*
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without 
modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Input: head = [1,2,3,4]
Output: [2,1,4,3]

Input: head = []
Output: []
*/



#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data=val;
        this->next=nullptr;
    }
};






void CreateLinkedList(node* &head,int value){ // insertion at the tail
    node* newnode=new node(value);
    if(head==nullptr){
        head=newnode; return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void adjacent(node* &head){
    if(head==nullptr || head->next==nullptr){
        return ;
    }
    node* prev=head;
    node* temp=prev->next;
    head=temp;
    while(temp!=nullptr || prev!=nullptr){
        prev->next=temp->next;
        temp->next=prev;
        prev=prev->next;
        temp=prev->next;
    }
}







void display(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout <<  temp->data << endl;
    cout << "\n\n";
}

int main(){
    node* head=nullptr;
    CreateLinkedList(head,1);
    CreateLinkedList(head,2);
    CreateLinkedList(head,3);
    CreateLinkedList(head,4);
    display(head);
    // CreateLinkedList(head,5);
    adjacent(head);
    cout << head << "\n";
    display(head);
    // cout << "\n" << head->next->next->data << endl << endl; // print 3 -------------------- 

}