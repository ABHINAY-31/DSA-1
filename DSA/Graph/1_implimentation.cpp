#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n , m;
    cout << "Enter the Number of rows and columns : ";
    cin >> n >> m;
    vector<vector<int>> vec(n+1,vector<int> (m+1,0));
    // marking each of the vertices connected -> 1 , not connnected - > 0
    // adjancency matrix and list
    for(int i = 0; i < m ; i++){
        int u , v; 
        cin >> u >> v;
        vec[u][v] = 1;
        vec[v][u] = 1;
    }

    cout << endl;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}