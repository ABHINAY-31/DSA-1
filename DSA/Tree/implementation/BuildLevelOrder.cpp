#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int value){
            this->data = value;
            this->left = nullptr;
            this->right = nullptr;
        }
};

node* BuildLevelOrderTree(node* root){
    queue<node*> q;
    cout << "enter the root Value: ";
    int value;
    cin >> value;
    root = new node(value);
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << "Enter the Value to the left: ";
        int val1;
        cin >> val1;
        if(val1 != -1){ // nullptr (no left or right node)
            temp->left = new node(val1);
            q.push(temp->left);
        }

        cout << "Enter the Value to the right: ";
        int val;
        cin >> val;
        if(val != -1){
            temp->right = new node(val);
            q.push(temp->right);
        }
    }
    return root;
}
void print(node* root){ // pre orderTraversal
    if(root == nullptr) return ;
    cout << root-> data << " ";
    print(root->left);
    print(root->right);
}

//iterative preorder traversal
void printIterativePreOrder(node* root){
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        node* temp = s.top();
        s.pop();
        cout << temp->data << " ";
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
}

int main(){
    node* root = nullptr;
    root = BuildLevelOrderTree(root);
    print(root);
    cout << "\n\n";
    printIterativePreOrder(root);
}