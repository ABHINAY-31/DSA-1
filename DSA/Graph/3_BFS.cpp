#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> v[6];
    queue<int> q;
    q.push(0);
    for(int i = 0; i < 8 ; i++){
        int u , v;
        cin >> u >> v;
        v[u].push_back(v);
        v[v].push_back(u);
    }
    int visited[8]={0};
    for(int i = 0; i < 8; i++){
        if(visited[i] != 1){
            visited[i] = 1;
            for(auto i : v[i]){
                cout << 
            }
        } 
    }
}