#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,4,5};
void reverse(int* arr,int n,int i){
    if(i==n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(arr,n,i+1);
}
int main(){
    reverse(arr,5,0);
    for(auto i:arr){
        cout << i << " ";
    }
}