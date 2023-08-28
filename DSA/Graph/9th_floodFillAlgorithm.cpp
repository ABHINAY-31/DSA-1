// Input: image = {{1,1,1},{1,1,0},{1,0,1}},
// sr = 1, sc = 1, newColor = 2.
// Output: {{2,2,2},
            //{2,2,0},
            //{2,0,1}}

// Explanation: From the center of the image 
// (with position (sr, sc) = (1, 1)), all 
// pixels connected by a path of the same color
// as the starting pixel are colored with the new 
// color.Note the bottom corner is not colored 2, 
// because it is not 4-directionally connected to 
// the starting pixel.

class Solution {
    void dfs(int row, int col, vector<vector<int>> &image, vector<vector<int>> &vis, int colr, int val){
        if(row >= image.size() || col >= image[0].size() || row < 0 || col < 0 || vis[row][col] == 1 || image[row][col] != val){
            return ;
        }
        vis[row][col] = 1;
        image[row][col] = colr;
        dfs(row - 1, col, image, vis, colr, val);
        dfs(row + 1, col, image, vis, colr, val);
        dfs(row, col - 1, image, vis, colr, val);
        dfs(row, col + 1, image, vis, colr, val);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int row = image.size();
        int col = image[0].size();
        vector<vector<int>> vis(row,vector<int> (col, 0));
        int val = image[sr][sc];
        dfs(sr, sc, image, vis, newColor, val);
        return image;
    }
};