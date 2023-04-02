#include <bits/stdc++.h>
using namespace std;
vector<int> countfre(vector<int> vec){
    unordered_map<int,int> mp;
    vector<int> v;
    int maxans=INT_MIN;
    for(int i=0;i<vec.size();i++){
        int ans=vec[i];
        while(ans > 0){
            int temp = ans % 10;
            ans = ans / 10;
            mp[temp]++;
        }
    }
    for(auto i : mp) maxans=max(maxans,i.second);
    for(auto i : mp){
        if(maxans == i.second){
            v.push_back(i.first);
        }
    }
    return v;
}
int main(){
    int n;
    cin >> n;
    vector< int > vec(n);
    for(auto &i:vec){
        cin >> i;
    }
    vector<int> v=countfre(vec);
    for(auto i : v){
        cout << i << " ";
    }

}