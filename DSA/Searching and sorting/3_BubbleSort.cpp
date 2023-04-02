#include <bits/stdc++.h>
using namespace std;
// ------------- Bubble sort --> max value move towards the end like a bubble
// -- it's best case is when array is already sorted   TC O(n)
// otherwise time complexity will bw O(n^2)

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    for(int i=0;i<n;i++){
        bool f=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                f=true; // if sorted or not -----------------------------------------
                swap(arr[j],arr[j+1]);
            }
        }
        if(!f){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}