#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(6);
    for(auto &i : vec){
        cin >> i;
    }
    for(int i=1;i<vec.size();i++){
        for(int j=i;j>0;j--){
            if(vec[j] < vec[j-1]){
                swap(vec[j],vec[j-1]);
            }
        }
    }
    for(auto i : vec){
        cout << i <<  " "; 
    }
}