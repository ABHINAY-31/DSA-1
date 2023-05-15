// find the diameter of the tree i.e any node can be chosen not just the root
// in this time complexity is O(n)
// the recursiv calls are made on each node only once that is calculates height of it hence it's
// TC --> O(n)
int height(node* root,int ans){
    if(root == nullptr){
        return 0;
    }
    int lh = height(root->left,ans);
    int rh = height(root->right,ans);

    ans = max(lh+rh,ans); // find the max between the last recursive call return ans or the returned value of 
    // lh+rh
    return max(lh,rh)+1;
}

int diameter(node* root){
    int ans = 0;
    ans = height(root,ans);
    return ans;
}

int main(){
    node* root = nullptr;
    root = levelOrderBuild(root);
    // PreOrder(root);
    cout << endl;
    cout << "diameter is: " << diameter(root);
}


// naive approach can be used sometime but in that case timecomplexity is O(n^2)
// visited each node once than for that node traverse an entire subtree that is 
// why the 
// TC -----> O(n^2)
int maxi = 0;
int diameter(node* root,int maxi){
    if(root == nullptr){
        return 0;
    }
    int lh = diamter(root);
    int rh = diamter(root);
    maxi =  max(maxi,lh+rh);
    diameter(root->left);
    diameter(root->right);

    return 1+max(lh,rh);
}