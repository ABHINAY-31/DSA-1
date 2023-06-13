#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    // find the minimum element and then swap it
    for(int i = 0; i < n ; i++){
        int min_index = i+1;
        for(int j = i; j < n; j++){
            if(vec[j] < vec[min_index]){
                min_index = j;
            }
        }
        swap(vec[i] , vec[min_index]);
    }
    for(auto i : vec){
        cout << i << " ";
    }
}