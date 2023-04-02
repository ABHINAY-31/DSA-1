#include <bits/stdc++.h>
using namespace std;
void subseq(string vec,int index,int n,string ans){
    if(index==n){
        cout << ans<< "\n";
        return;
    }
    ans.push_back(vec[index]);
    subseq(vec,index+1,n,ans);
    ans.pop_back();
    subseq(vec,index+1,n,ans);
}
int main(){
    string str="123";
    vector<string> v;
    string s="";
    subseq(str,0,4,s);
}

// time complexity O(2^n) for array reference it will be * n as well
// space comlpexity O(n) // depth of the stack