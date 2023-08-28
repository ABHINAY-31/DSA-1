class Solution {
  public:
    void bfs(int row, int col, vector<vector<char>> &grid,vector<vector<int>> &vis){
        queue<pair<int,int>> bfs;
        vis[row][col] = 1;
        bfs.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        while(!bfs.empty()){
            int r = bfs.front().first;
            int c = bfs.front().second;
            bfs.pop();
            for(int delrow = -1; delrow <= 1; delrow++){
                for(int delcol = -1; delcol <= 1; delcol++){
                    int nrow = delrow + r;
                    int ncol = delcol + c;
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && vis[nrow][ncol] != 1){
                        vis[nrow][ncol] = 1;
                        // cout << nrow << " " << ncol << endl;
                        bfs.push({nrow,ncol});
                        /
                    }
                }
            }
            
        }
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int cnt = 0;
        vector<vector<int>> vis(grid.size(),vector<int> (grid[0].size(), 0));
        // queue<pair<int,int>> bfs;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    cnt++;
                    // cout << i << j <<  endl;
                    bfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};



// solution using dfs
//class Solution {
    void dfs(int row,int col, vector<vector<char>> &grid, vector<vector<int>> &vis){
        if(row >= grid.size() || col >= grid[0].size() || vis[row][col] == 1 || grid[row][col] == '0'
        || row < 0 || col < 0){
            return ;
        }
        vis[row][col] = 1;
        // if(grid[row][col] == '1'){
        grid[row][col] = '0';
        // }
        dfs(row - 1, col , grid, vis);
        dfs(row + 1, col , grid, vis);
        dfs(row, col - 1, grid, vis);
        dfs(row, col + 1, grid, vis);
        dfs(row - 1, col - 1, grid, vis);
        dfs(row - 1, col + 1, grid, vis);
        dfs(row + 1, col - 1, grid, vis);
        dfs(row + 1, col + 1, grid, vis);
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> vis(row,vector<int> (col , 0));
        int cnt = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(vis[i][j] != 1 && (grid[i][j] != '0')){
                    cnt++;
                    // cout << i << " " << j << endl;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};