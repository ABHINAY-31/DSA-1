#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(6);
    for(auto &i : vec){
        cin >> i;
    }
    for(int i=0;i<vec.size();i++){
        int min = i;
        for(int j=i+1;j<vec.size();j++){
            if(vec[min] > vec[j]){
                min = j;
            }
        }
        swap(vec[min],vec[i]);
    }
    for(auto i : vec){
        cout << i << " ";
    }
}