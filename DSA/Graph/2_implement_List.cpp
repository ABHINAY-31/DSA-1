#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> vec[6]; // graph implementation using the list way far better than matrix one
    list<int> l;

    for( int i = 0; i < 9; i++){
        int u , v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
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