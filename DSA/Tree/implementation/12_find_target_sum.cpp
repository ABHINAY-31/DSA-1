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
    bool height(TreeNode* root ,int ans,int targetSum){
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr){
            ans+=root->val;
            if(ans == targetSum){
                return true;
            }
        }
return height(root->left,ans+root->val,targetSum) || height(root->right,ans+root->val,targetSum);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int ans = 0;
        return height(root , ans , targetSum);
        
    }
};