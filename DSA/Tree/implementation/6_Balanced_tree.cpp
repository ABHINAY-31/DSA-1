#include <bits/stdc++.h>
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
node* buildlevelOrder(node* &root){
    cout << "Enter the root value: ";
    int value;
    cin >> value;
    root = new node(value);
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<< "Enter the Value to the left: ";
        int value;
        cin >> value;
        if(value!=-1){
            temp->left = new node(value);
            q.push(temp->left);
        }

        cout << "Enter the Value to the Right: ";
        int val;
        cin >> val;
        if(val!=-1){
            temp->right = new node(value);
            q.push(temp->right);
        }
    }
    return root;
}


// check the tree is balancesd or not
int depthOfTree(node* root){ 
    if(root == nullptr){
        return 0;
    }
    int l = depthOfTree(root->left);
    int r = depthOfTree(root->right);
    
}

int main(){
    node* root;
    root = buildlevelOrder(root);
    cout << depthOfTree(root) << endl;
}