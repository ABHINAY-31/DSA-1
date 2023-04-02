#include <bits/stdc++.h>
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

void ReverseLinkedList(node* &head){ // Reverse the Singly Linked List
    if(head==nullptr || head->next==nullptr) return;
    node* prev=nullptr;
    node* curr=head;
    node* forward=head->next;
    while(forward!=nullptr){
        curr->next=prev;
        prev=curr;
        curr=forward;
        forward=curr->next;
    }
    curr->next=prev; // at last forward is at null but operation doest perform (loop ends) that's why doing this at last
    head=curr;
}

void displayLinkedList(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout <<  temp->data << endl;
    cout << "\n";
}

int main(){
    node* head=nullptr;
    CreateLinkedList(head,1);
    CreateLinkedList(head,2);
    CreateLinkedList(head,3);
    CreateLinkedList(head,4);
    CreateLinkedList(head,5);
    displayLinkedList(head);

    ReverseLinkedList(head);
    displayLinkedList(head);
}