#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
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
// ------------------------------------ insert by position ---------------------------
void InsertPosition(node* &head,int value,int pos){
    node* newnode=new node(value);
    if(head==nullptr && pos>=1){
        head=newnode;newnode->next=head;return;
    }
    else if(pos==1){
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;return;
    }
    node* temp=head;
    while(pos>2 && temp->next!=head){
        pos--;
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
//---------------------- deletion by position -----------------------
void deletePosition(node* &head ,int pos){
    if(head==nullptr ||head->next==head){
        head=nullptr;
        return;
    }
    else if(pos==1){
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        head=head->next;
        temp->next=head;
        return;
    }
    node* temp1=head;
    while(pos>2 && temp1->next!=head){
        pos--;
        temp1=temp1->next;
    }
    node* curr=temp1->next;
    temp1->next=curr->next;
    delete(curr);
}

void display(node* head){
    node* temp=head;
    while(temp->next!=head){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << temp->data << "\n\n";
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

    //------------------------- By Position Insertion -----------------------
    InsertPosition(head,10,3);
    display(head);
    InsertPosition(head,11,1);
    display(head);
    InsertPosition(head,15,8);
    display(head);

    //------------------------- By Position Deletion ------------------------
    deletePosition(head,1);
    display(head);
    deletePosition(head,2);
    display(head);
    deletePosition(head,4);
    display(head);
    deletePosition(head,5);
    display(head);
}