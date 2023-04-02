#include <bits/stdc++.h>
using namespace std;
// void print(int i,int ans){
//     if(i<1){
//         cout << ans << " ";
//         return ;
//     }
//     print(i-1,ans+i);
// }
// int main(){
//     int ans=0;
//     print(3,ans);
// }

int answer(int n){
    if(n==0)return 0;
    return n + answer(n-1);
}
int main(){
    cout <<  answer(3);
}