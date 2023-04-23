#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec(6);
    for(auto &i: vec){
        cin >> i;
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size()-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
    for(auto i:vec){
        cout << i << " ";
    }
}