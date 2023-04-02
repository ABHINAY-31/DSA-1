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

void InsertAtBeginning(node* &head,int value){ // insertion at the beginning of the list
    node* newnode=new node(value);
    if(head==nullptr){
        newnode=head;
        return;
    }
    newnode->next=head;
    head=newnode;
}

void InsertAtPosition(node* &head,int value,int pos){
    if(pos==1){
        InsertAtBeginning(head,value);
        return;
    }
    node* temp=head;
    int cnt=2;
    while(cnt<pos && temp->next!=nullptr){
        temp=temp->next;
        cnt++;
    }
    node* newnode=new node(value);
    newnode->next=temp->next;
    temp->next=newnode;
}

//----------------------------- delete by Position ---------------------------------------
void deletePosition(node* &head,int pos){
    
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
    node* head=nullptr;
    CreateLinkedList(head,1);
    CreateLinkedList(head,2);
    CreateLinkedList(head,3);
    CreateLinkedList(head,4);
    CreateLinkedList(head,5);
    displayLinkedList(head);
    // cout << "\n" << head->next->next->data << endl << endl; // print 3 -------------------- 

    InsertAtBeginning(head,6);
    displayLinkedList(head);

    //------------------------------------------------------------------------------------
    InsertAtPosition(head,7,1);
    displayLinkedList(head);
    InsertAtPosition(head,10,2);
    displayLinkedList(head);
    InsertAtPosition(head,14,5);
    displayLinkedList(head);
    InsertAtPosition(head,20,10);
    displayLinkedList(head);

    //------------------------------- Deletion By Position ----------------------------
    deletePosition(head,1);
    display(head);
}