#include <bits/stdc++.h>
using namespace std;
int mean(vector<int> vec){
    if(vec.size()==0) return 0;
    if(vec.size()==1) return 1;
    int cnt=0;
    // vector<int> v;
    // v.push_back(ceil(vec[1])/2);
    for(int i=0; i<vec.size(); i++){
        if(i==0)
            if(ceil(vec[i+1])/2.0 == vec[i]) cnt++;
        else if(vec.size()-1==i) 
            if(ceil(vec[i-1])/2.0 == vec[i]) cnt++;
        else
            if(ceil(vec[i-1]+vec[i+1])/2.0 == vec[i]) cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& i : vec){
        cin >> i;
    }
    cout <<  "ans will be: " << mean(vec);
}