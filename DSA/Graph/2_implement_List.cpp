#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(){
    vector<int> vec[4]; // graph implementation using the list way far better than matrix one

    for(int i = 0; i < 5; i++){
        int u, v;
        cin >> u >> v;//undirected
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    // bfs 
    vector<int> bfs;
    vector<int> vis(4,0);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node <<  " ";
        for(auto i : vec[node]){
            if(vis[i] != 1){
                q.push(i);
                vis[i]=1;
            }
        }
    }
}
// 