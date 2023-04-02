#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int>vec,int index,vector<int> output,int sum){
    if(index>=vec.size()){
        int ans=0;
        for(auto i:output){
            ans+=i;
        }
        if(ans==sum){
            for(auto i:output){
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }
    
    output.push_back(vec[index]);
    if(solve(vec,index+1,output,sum)==true){
        return true;
    }

    output.pop_back();
    if(solve(vec,index+1,output,sum)==true){
        return true;
    }
    return false;
}
void subseq(vector<int> v,int sum){
    vector<int> output;
    solve(v,0,output,sum);
}
int main(){
    vector<int> vec={1,2,3,4,5};
    subseq(vec,5);
    
}