#include <iostream>
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
void preorder(node* root){
    if(root == nullptr){
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root == nullptr){
        return ;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node* root){
    if(root == nullptr){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    node* root=nullptr;
    // root = buildTree(root);
    root = buildTree(root);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);

}