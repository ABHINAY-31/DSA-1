class Solution {
public:
    void dfs1(int node, vector<int> &dfs, vector<int> &vis, vector<int> adj[]){
        vis[node] = 1;
        dfs.push_back(node);
        // traversing through it
        for(auto i : adj[node]){
            if(!vis[i]){
                dfs1(i, dfs, vis, adj);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> dfs;
        int start = 0;
        vector<int> vis(V,0);
        dfs1(start, dfs, vis, adj);
        return dfs;
    }
};