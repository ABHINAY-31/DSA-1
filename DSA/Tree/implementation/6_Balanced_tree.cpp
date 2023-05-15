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
    return max(l,r)+1;
}

bool checkBalance(node* root){ // naive approach in this time complexity is O(n^2)
    if(root == nullptr){
        return true;
    }
    int lh = depthOfTree(root->left);
    int rh = depthOfTree(root->right);

    if(abs(lh-rh) > 1) return false;
    bool l = checkBalance(root->left);
    bool r = checkBalance(root->right);
    if(!l || !r) return false;
    return true;
}

// best approach that is in O(n)
int check(node* root){
    if(root == nullptr){
        return 0;
    }
    int lh = check(root->left);
    int rh = check(root->right);
    if(lh == -1 || rh == -1) return -1;
    if(abs(lh-rh) > 1) return -1;
    return max(lh,rh)+1;
}

int main(){
    node* root;
    root = buildlevelOrder(root);
    cout << checkBalance(root) << endl;
    if(check(root) != -1){
        cout << "Balanced" << endl;
    }
    else{
        cout << "not Balanced" << endl;
    } 
}