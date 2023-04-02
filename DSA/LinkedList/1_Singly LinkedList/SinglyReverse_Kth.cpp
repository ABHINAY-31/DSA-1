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

void ReverseLinkedListByKth(node* &head,int k){ // Reverse the Singly Linked List by K
    if(head==nullptr || head->next==nullptr) return;
    
}

void displayLinkedList(node* head){ // print the list value
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

    ReverseLinkedListByKth(head,3);
    displayLinkedList(head);
}