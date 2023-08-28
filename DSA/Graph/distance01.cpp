//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
	    int m = grid[0].size();
	    
	    vector<vector<int>> vis(n, vector<int> (m, 0));
	    vector<vector<int>> dist(n, vector<int> (m, 0));
	    
	    queue<pair<pair<int,int>, int>> q;
	    
	    int delrow[] = {-1, 0, 1, 0};
	    int delcol[] = {0, 1, 0, -1};
	    int t = 0;
	    for(int i = 0; i < n; i++){
	        for(int j = 0;j  <m; j++){
	            if(grid[i][j] == 1){
	                q.push({{i,j},0});
	                vis[i][j] = 1;
	            }
	        }
	    }
	    while(!q.empty()){
	        int row = q.front().first.first;
	        int col = q.front().first.second;
	        int t = q.front().second;
	        q.pop();
	        for(int i = 0; i < 4; i++){
	            int r = row + delrow[i];
	            int c = col + delcol[i];
	            if(r >= 0 && r < n && c >= 0 && c < m && !vis[r][c]){
	                if(grid[r][c] == 0){
	                    q.push({{r,c},t + 1});
	                    vis[r][c] = 1;
	                    dist[r][c] = t + 1;
	                }
	            }
	        }
	    }
	    return dist;
	}
};

