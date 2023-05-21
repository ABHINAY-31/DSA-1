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
    int cnt = 0;
    void find(TreeNode* root,long ans,int targetSum){
        if(root == nullptr) return;
        ans+=root->val;
        if(ans == targetSum){
            cnt++;
        }

        find(root->left,ans,targetSum);
        find(root->right,ans,targetSum);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return 0;
        // int ans= 0;
        find(root,0,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return cnt;
    }
};