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
    void preorder(TreeNode* root,vector<vector<int>> &vec,vector<int> &v,int ans,int targetSum){
        if(root == nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            ans+=root->val;
            if(ans == targetSum){
                v.push_back(root->val);
                vec.push_back(v);
                v.pop_back();
            }
            return;
        }
        v.push_back(root->val);
        preorder(root->left,vec,v,ans+root->val,targetSum);
        // v.pop_back();
        preorder(root->right,vec,v,ans+root->val,targetSum);
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> vec;
        vector<int> v;
        int ans=0;

        preorder(root,vec,v,ans,targetSum);
        return vec;
    }
};