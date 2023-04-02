#include <bits/stdc++.h>
using namespace std;
/*
    for the  binary search array must be sorted --------------------------
    time complesity will be   O(log n) in all the cases
*/
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end()); // sort function ( --   TC is O(log n) ---)
    int num;
    cin >> num;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==num){
            cout << "found ar index: " << mid << endl;
            return 0;
        }
        else if(arr[mid]<num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout << "NOT FOUND\n";
}