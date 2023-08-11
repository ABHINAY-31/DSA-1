int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> v[V];
        for(int i = 0; i < adj.size(); i++){
            for(int j = 0; j  < adj[i].size(); j++){
                if(adj[i][j] == 1 && i != j){
                    v[i].push_back(j);
                    v[j].push_back(i);
                }
            }
        }
        // vector<int> ans;
        // queue<int> q;
        int cnt = 0;
        vector<int> vis(V, 0);
        for(int i = 0; i < V; i++){
            // cnt++;
            if(vis[i] != 1){
                cnt++;
            }
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto it : v[node]){
                    if(vis[it] != 1){
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        } 
        return cnt;   
    }
};