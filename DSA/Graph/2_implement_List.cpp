#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main(){
    vector<int> vec[6]; // graph implementation using the list way far better than matrix one
    list<int> l;

    for(int i = 0; i < 9; i++){
        int u , v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    vector<int> v(9)={0};
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        if(v[i] != 1){
            v[i] = 1;
            for(auto j : v[i]){
                cout << j << " ";
                v[j] = 1;
            }
        }
    }

    for(int i = 0; i < 9; i++){
        cout << i << "->";
        for(auto j : vec[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}
// 