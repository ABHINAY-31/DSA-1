#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for(auto &i:vec){
        cin >> i;
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
                flag=true;
            }
        }
        if(!flag){
            break;
        }
    }
    for(auto i:vec){
        cout << i << " ";
    }
}