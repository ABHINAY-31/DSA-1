#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> vec,int index,vector<int> output,int sum,vector<vector<int>> &v){
    if(index>=vec.size()){
        int ans=0;
        for(auto i:output){
            ans+=i;
        }
        if(ans==sum ){
            v.push_back(output); 
        }
        return ;
    }
    solve(vec,index+1,output,sum,v);
    output.push_back(vec[index]);
    solve(vec,index+1,output,sum,v);
}
vector<vector<int>> subseq(vector<int> vec,int sum){
    vector<vector<int>> v;
    vector<int> ans;
    solve(vec,0,ans,sum,v);
    return v;
}
int main(){
    vector<int> v={1,4,3,2,5,6};
    vector<int> ans;
    
    vector<vector<int>> vec=subseq(v,9);
    for(auto i:vec){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }
}

//print only one of the subsequence 