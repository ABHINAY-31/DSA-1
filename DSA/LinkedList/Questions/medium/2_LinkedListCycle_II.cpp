/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.

Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.

Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.

Constraints:

    The number of the nodes in the list is in the range [0, 104].
    -105 <= Node.val <= 105
    pos is -1 or a valid index in the linked-list.

*/

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
    CreateLinkedList(head1,2);
    CreateLinkedList(head1,4);
    CreateLinkedList(head1,2);
    CreateLinkedList(head1,4);
    
    
    displayLinkedList(head1);
}