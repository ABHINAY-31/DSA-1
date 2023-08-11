class Solution {
    public:
    void dfs(int node, vector<int> &vis, vector<int> adj[]){
        vis[node] = 1;
        for(auto i : adj[node]){
            if(vis[i] != 1){
                dfs(i, vis, adj);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int cnt = 0;
        vector<int> v[V];
        vector<int> vis(V,0);
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(adj[i][j] == 1 && i != j){
                    v[i].push_back(j);
                }
            }
        }
        for(int i = 0; i < V; i++){
            if(vis[i] == 0){
                dfs(i, vis, v);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends