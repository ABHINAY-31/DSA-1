#include <bits/stdc++.h>
using namespace std;

int main(){ // in place sorting algorithm O(n) in best case and it is stable algorithm
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto &i : vec){
        cin >> i;
    }
    for(int i = 1; i < n; i++){
        int k = vec[i];
        int j = i - 1;
        while(j>=0 && vec[j] > k){
            vec[j+1] = vec[j];
            j = j - 1;
        }
        vec[j+1] = k;
    }
    for(auto i : vec){
        cout << i << " ";
    }
}