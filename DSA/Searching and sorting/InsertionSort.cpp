#include <bits/stdc++.h>
using namespace std;
// ------------- Insertion Sort (inplace sorting algorithm) ------------)
// time complexity is O(n^2) in all the cases except best case


/*
    Insertion is used in shifting manner from right to left
    TC: Best: O(n) already sorted
        Average: O(n^2)
        worst: O(n^2) reverse sorted
*/

//------------------------------ Important Note ------------------------------

/*
    - Adaptable
    - Stable: ----> It is a stable algorithm because the order of the keys or values is maintained 
    beacause we are not swapping the values as we are doing in the selection sort 
    we are just shifting it.
*/
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    for(auto &i:arr){
        cin >> i;
    }

    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>0){
            if(arr[j]>temp){
                arr[j+1]=arr[j]; // here just shifting the values
                j--;
            }
            else{
                break; // if no shifting than just break the inner loop
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}