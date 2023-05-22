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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return false;
        queue<TreeNode*> q,q1;
        // bool flag = true,f = true;
        q.push(root->left);
        // q.push(nullptr);
        q1.push(root->right);
        // q1.push(nullptr);
        while(!q.empty() && !q1.empty()){
            TreeNode* temp = q.front();
            q.pop();
            TreeNode* temp1 = q1.front();
            q1.pop();
            if(temp == nullptr && temp1 == nullptr) continue;
            else{
                if(temp == nullptr || temp1 == nullptr || 
                temp->val!=temp1->val) return false;

                else{
                    q.push(temp->left);
                    q.push(temp->right);
                    q1.push(temp1->right);
                    q1.push(temp1->left);
                }
            } 
        }
        // if(!q.empty() || !q1.empty()) return false;
        return true;
    }
};