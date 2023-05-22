/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v,vec;
        if(root == nullptr) return vec;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        // v.push_back(-1);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == nullptr){
                if(!q.empty()){
                    v.push_back(101);
                    q.push(nullptr);
                }
            }
            else{
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        v.push_back(101);
        for(int i = 0; i < v.size()-1; i++){
            if(v[i+1] == 101){
                vec.push_back(v[i]);
            }
        }
        return vec;
    }
};