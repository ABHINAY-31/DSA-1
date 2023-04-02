#include <bits/stdc++.h>
using namespace std;
// int dp[6]={-1};
// memoization
int fibo(int n,vector<int> &vec){
    if(n<=1){
        return n;
    }
    if(vec[n]!=-1){
        return vec[n];
    }
    return vec[n]=fibo(n-1,vec)+fibo(n-2,vec);
    // return dp[n];
}

//tabulation (Bottom up Approach) now we will remove the extra space that is O(n)
int fibonacci(int n){
    // dp[0]=0;dp[1]=1;
    int prev=1,prev2=0;
    for(auto i=2;i<=n;i++){
        // dp[i]=dp[i-1]+dp[i-2];
        int curr1=prev+prev2;
        prev2=prev;
        prev=curr1;

    }
    // return dp[n];
    return prev;
}
int main(){
    vector<int> vec(6,-1);
    cout << fibo(5,vec) << "\n";
    // cout << "\n" << dp[0];
    vector<int> dp(7,-1);
    cout << fibonacci(6);
}