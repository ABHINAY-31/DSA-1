#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
// need to do 
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
    cin >> value;
    if(value == -1){
        return nullptr;
    }
    root = new node(value);
    cout << "Enter the Value to the left: ";
    root->left = buildTree(root->left);
    cout << "Enter the value to the right: ";
    root->right = buildTree(root->right);
}     

void levelOrder(node* root){
    if(root == nullptr){
        return ; 
    }
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == nullptr){
            if(!q.empty()){
                cout << endl;
                q.push(nullptr);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    cout << endl;
}

void preOrder(node* root){
    if(root == nullptr){
        return ;
    }
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

void inOrder(node* root){
    if(root == nullptr){
        return ;
    }
    stack<node*> s;
    s.push(root);
    node* temp=s.top();
    bool flag =true;
    while(true){
        if(temp!=nullptr){
            if(flag){
                s.pop();
                flag=false;
            }
            s.push(temp);
            temp=temp->left;
        }
        else{
            if(s.empty()) break;
            temp = s.top();
            cout << temp->data << " ";
            s.pop();
            temp=temp->right;
        }
    }
}

void postOrder(node* root){ // use two pointer in case of Post Order
    if(root == nullptr) return ;
    stack<node*> s;
    node *curr = root;
    while(!s.empty() || curr!=nullptr){
        if(curr!=nullptr){
            s.push(curr);
            curr = curr->left;
        }
        else{
            node* temp = s.top()->right;
            if(temp == nullptr){
                temp = s.top();
                cout << temp->data << " ";
                s.pop();
                // temp = temp->right;
                while(temp == s.top()->right && !s.empty()){
                    temp = s.top();
                    cout << temp->data << " ";
                    s.pop();
                }
            }
            else{
                curr = temp;
            }
        }
    }
}

int main(){
    node* root = nullptr;
    root = buildTree(root);
    cout << "Levelorder :\n";
    levelOrder(root);
    cout << "PreORder\n";
    preOrder(root);
    cout << "\nInOrder\n";
    inOrder(root);
    cout << "\nPostOrder\n";
    postOrder(root);
    // printPreOrder(root);
    // cout << "\ninorder :\n";
    // cout << endl;
    // printInOrder(root);
    // cout << endl;
    // cout << "postorder :\n";
    // printPostOrder(root);
    // cout << endl;
    // // now perform the folloing traversal using iterarive approach

    // //iterative pre order
    // preOrder(root);
    // cout << endl;
    // inOrder(root);
}