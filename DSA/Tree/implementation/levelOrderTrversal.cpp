#include <iostream>
#include <queue>
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
    if(root == nullptr) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                // cout << temp->data << " ";
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    node* root=nullptr;
    // root = buildTree(root);
    root = buildTree(root);
    levelOrderTraversal(root);

}