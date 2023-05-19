// not done yet
// isuue while printing the leaf node else i OK (few wrong submission's)
//{ Driver Code St

// } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void preorder(Node* root,vector<int> &vec){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            vec.push_back(root->data);
            return;
        }
        preorder(root->left,vec);
        preorder(root->right,vec);
    }
    vector <int> boundary(Node *root)
    {
        vector<int> vec;
        // get the left side boundary
        if(root!=nullptr){
            vec.push_back(root->data);
        }
        if(root->left){
            Node* temp = root->left;
            while(temp!=nullptr){
                if(!temp->left && !temp->right){
                    break;
                }
                vec.push_back(temp->data);
                if(temp->left){
                    temp = temp->left;
                }
                else{
                    temp = temp->right;
                }
            }
        }
        
        // now we will find all the leaf nodes
        // using the pre order
        if(root->left!=nullptr || root ->right!=nullptr){
            preorder(root,vec);
        }
        
        // now we find the right boundary except its leaf
        vector<int> v;
        if(root->right){
            Node* temp = root->right;
            while(temp!=nullptr){
                if(temp->left == nullptr && temp->right == nullptr){
                    break;
                }
                v.push_back(temp->data);
                if(temp->right){
                    temp = temp->right;
                }
                else{
                    temp = temp->left;
                }
            }
            reverse(v.begin(),v.end());
        }
        for(int i=0;i<v.size();i++){
            vec.push_back(v[i]);
        }
        // if(v.size()>=0){
            
        // }
        return vec;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends