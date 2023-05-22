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

// time complexity is O(n)
class Solution {
public:
   void preorder(TreeNode* root , vector<string> &v, string str){
       if(root == nullptr) return ;
       if(root->left == nullptr && root->right == nullptr){
           str+=to_string(root->val);
           v.push_back(str);
           return ;
       }
       str+=to_string(root->val);
       str+="->";
       preorder(root->left,v,str);
       preorder(root->right,v,str);
   }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string str;
        preorder(root,v,str);
        return v;
    }
};