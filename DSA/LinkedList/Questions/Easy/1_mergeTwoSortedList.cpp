/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

Input: list1 = [], list2 = []
Output: []

Input: list1 = [], list2 = [0]
Output: [0]
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
node* merge(node* head1,node* head2){
    if(head1==nullptr){
        return head2;
    }
    else if(head2==nullptr){
        return head1;
    }
    node* temp=head1;
    node* temp1=head2;
    node* prev=head1;
    node* prev1=head2;
    while(temp!=nullptr && temp1!=nullptr){
        if(temp->data <= temp1->data){
            temp=temp->next;
            prev->next=temp1;
            prev=temp;
        }
        else{
            temp1=temp1->next;
            prev1->next=temp;
            prev1=temp1;
        }
    }
    if(head1->data<=head2->data){
        return head1;
    }return head2;
}






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

void displayLinkedList(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout <<  temp->data << endl;
    cout << "\n\n";
}

int main(){
    node* head1=nullptr;
    node* head2=nullptr;
    CreateLinkedList(head1,5);
    // CreateLinkedList(head1,2);
    // CreateLinkedList(head1,4);
    
    CreateLinkedList(head2,1);
    CreateLinkedList(head2,3);
    CreateLinkedList(head2,4);
    head1=merge(head1,head2);
    displayLinkedList(head1);
}