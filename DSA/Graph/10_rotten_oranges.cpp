// grid = [[2,1,1],[0,1,1],[1,0,1]]
// Output: -1
// Explanation: The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        queue<pair<pair<int,int>, int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    vis[i][j] = 1;
                    q.push({{i,j}, 0});
                }else vis[i][j] = 0;
            }
        }
        int tm = 0;
        int viewrow[] = {-1 , 0, 1, 0};
        int viewcol[] = {0, 1, 0, -1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(t, tm);
            for(int i = 0; i < 4; i++){
                int row = r + viewrow[i];
                int col = c + viewcol[i];
                if(row >= 0 && row < n && col >= 0 && col < m && !vis[row][col] && grid[row][col] == 1){
                    vis[row][col] = 1;
                    q.push({{row,col},t + 1});
                    
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    return -1;
                }
            }
        }
        return tm;
    }
};