#include <iostream>
#include <vector>
#include <stack>
#include <queue>
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

node* buildTree(node* root){
    int value;
    // cout << "Enter the root value: ";
    cin >> value;
    root = new node(value);
    if(value == -1){
        return nullptr;
    }
    cout << "Enter the data to the left of the Tree: ";
    root->left = buildTree(root->left);
    cout << "Enter the data to the right of the Tree: ";
    root->right = buildTree(root->right);
    return root;
}

void printPreOrder(node* root){ // dfs preOrder
    if(root == nullptr){
        return ;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node* root){
    if(root == nullptr){
        return ;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printPostOrder(node* root){
    if(root == nullptr){
        return ;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}


// iterative preorder
void preOrder(node* root){
    if(root == nullptr) return ;
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
            s.push(temp->left); // tsack is LIFO that io ehy add right first so left will printed
        }
    }
}

void inOrder(node* root){
    if(root == nullptr){
        return ;
    }
    stack<node*> s;
    // s.push(root);
    node* temp = root;
    while(!s.empty()){ 
        if(temp!=nullptr){
            s.push(temp);
            temp = temp->left;
        }
        else{
            temp = s.top();
            s.pop();
            cout << temp->data << " ";
            temp = temp->right;
        }
    }
}                                                                                                                                              
int main(){
    node* root = nullptr;
    root = buildTree(root);
    cout << "preorder :\n";
    printPreOrder(root);
    cout << "\ninorder :\n";
    cout << endl;
    printInOrder(root);
    cout << endl;
    cout << "postorder :\n";
    printPostOrder(root);
    cout << endl;
    // now perform the folloing traversal using iterarive approach

    //iterative pre order
    preOrder(root);
    cout << endl;
    inOrder(root);
}