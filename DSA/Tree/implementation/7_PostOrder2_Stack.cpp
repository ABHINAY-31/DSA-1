#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* levelOrderBuild(node* root){
    cout << "Enter the root value: ";
    int value;
    cin >> value;
    root = new node(value);
    queue<node*> q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        int value;
        cout << "Enter the Value to the left of the tree : ";
        cin >> value;
        if(value != -1){
            temp->left = new node(value);
            q.push(temp->left);
        }
        int value1;
        cout << "Enter the value to the right of the Tree: ";
        cin >> value1;
        if(value1 != -1){
            temp->right = new node(value1);
            q.push(temp->right);
        }
    }
    return root;
}
// void PreOrder(node* root){
//     if(root == nullptr){
//         return;
//     }
//     cout <<  root->data << " ";
//     PreOrder(root->left);
//     PreOrder(root->right);
// }

void PostOrder(node* root){
    if(root == nullptr) return;
    stack<node*> s1;
    stack<node*> s2;
    s1.push(root);
    s2.push(root);
    while(!s1.empty()){
        node* temp = s1.top();
        s1.pop();
        if(temp->left){
            s1.push(temp->left);
        }
        if(temp->right){
            s1.push(temp->right);
        }
        if(!s1.empty()){
            s2.push(s1.top());
            // cout << s1.top()->data << " ";
        }
    }
    cout << s2.size() << endl;
    while(!s2.empty()){
        cout << s2.top()->data << " ";
        s2.pop();
    } 
}
int main(){
    node* root = nullptr;
    root = levelOrderBuild(root);
    // PreOrder(root);
    PostOrder(root);
}