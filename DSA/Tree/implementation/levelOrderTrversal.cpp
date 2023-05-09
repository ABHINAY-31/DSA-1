#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
// node for the tree
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int value){
        this->data=value;
        this->left=nullptr;
        this->right=nullptr;
    }
};
node* buildTree(node* root){ // by refernce pass kiya kar
    int value;
    cin >> value;
    root = new node(value);
    if(value == -1){
        return nullptr;
    }
    cout << "Enter the Value to the left: ";
    root->left = buildTree(root->left);
    cout << "Enter the Value to the right: ";
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    if(root == nullptr) return ;
    queue<node*> q;
    q.push(root);
    q.push(nullptr); // act as a separator
    while(!q.empty()){
        node* temp = q.front();
        // cout << temp->data << " ";
        q.pop();
        if(temp==nullptr){
            if(!q.empty()){
                q.push(nullptr);
                cout << endl;
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
}


void ReverseLevelOrderTraversal(node* root){
    if(root == nullptr) return ;
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    vector<int> vec;
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==nullptr){
            if(!q.empty()){
                q.push(nullptr);
                vec.push_back(-1);
            }
        }
        else{
            vec.push_back(temp->data);
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }
    reverse(vec.begin(),vec.end());
    for(auto i : vec){
        if(i==-1){
            cout << endl;
            continue;
        }
        cout << i << " ";
    }
}
int main()
{
    node* root=nullptr;
    // root = buildTree(root);
    root = buildTree(root);
    levelOrderTraversal(root); 
    cout << endl;
    ReverseLevelOrderTraversal(root);
}