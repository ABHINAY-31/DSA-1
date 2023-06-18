#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(vec[min] > vec[j]){
                min = j;
            }
        }
        swap(vec[min] , vec[i]);
    }
    for(auto i : vec){
        cout << i << " ";
    }
}