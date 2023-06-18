#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j] , vec[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
        flag = true;
    }
    for(auto i : vec) {
        cout << i << " ";
    }
}