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

// the moment flag is true simply push it in the vector but in the case of false
// simply we need to first reverse the vector than put it in the 2D vector.
// time complexity // k is size of array each time when we reverse it
// k  --- 2k ---- 4k ---- 8k ----like this
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == nullptr) return vec;
        queue<TreeNode*> q;
        bool flag = true;
        q.push(root);
        q.push(nullptr);
        vector<int> v;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == nullptr){
                if(flag){
                    if(!q.empty()){
                        vec.push_back(v);
                        q.push(nullptr);
                        v.clear();
                        flag = false;
                    }
                }
                else{
                    if(!q.empty()){
                        reverse(v.begin(),v.end());
                        vec.push_back(v);
                        q.push(nullptr);
                        v.clear();
                        flag = true;
                    }
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
        if(flag) vec.push_back(v);
        else{
            reverse(v.begin(),v.end());
            vec.push_back(v);
        }
        return vec;
    }
};



// another approach to do is simply swap the value while inserting them
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == nullptr) return vec;
        queue<TreeNode*> q;
        q.push(root);
        // q.push(nullptr);
        bool lefttoright = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> v(size);
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = lefttoright ? i : size-i-1;
                v[index] = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }     
            }
            vec.push_back(v);
            lefttoright = !lefttoright;
        }
        return vec;
    }
};