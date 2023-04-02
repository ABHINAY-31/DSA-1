#include <bits/stdc++.h>
using namespace std;
// void print(int i,int n){
//     if(i<1)return;
//     print(i-1,n);
//     cout << i << endl;
// }
// int main(){
//     int n=4;
//     print(3,3);
// }

void print(int i,int n){
    if(i>n)return;
    print(i+1,n); // Backtracks only execution move to cout when base case is reached
    cout << i << " ";
}

int main(){ 
    print(1,5);
}