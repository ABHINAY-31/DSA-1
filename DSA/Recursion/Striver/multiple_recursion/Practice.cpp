#include <bits/stdc++.h>
using namespace std;
void subSeq(string nums,string output,int index,vector<string> &ans){
    if(index>=nums.length()){
        if(find(ans.begin(),ans.end(),output)==ans.end()){
            ans.push_back(output);
        }return;
    } 
    output.push_back(nums[index]);
    subSeq(nums,output,index+1,ans);
    output.pop_back();
    subSeq(nums,output,index+1,ans);

    
}
void subsequence(string str){
    vector<string> ans;
    string output;
    subSeq(str,output,0,ans);
    for(auto i:ans){
        cout << i << endl;
    }
}
int main(){
    string str="312";
    vector<string> ans;
    subsequence(str);
}