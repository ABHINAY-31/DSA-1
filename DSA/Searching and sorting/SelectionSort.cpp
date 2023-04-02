#include <iostream>
#include <vector>
using namespace std;
/*
    Main aim of selection sort is to find the minimum value than swap it (ofcourse sorting is the one)
    moving from left to right-------------------------

    Time complexity:Best Case: O(n^2) always sorted
                    Average Case: O(n^2)
                    Worst Case: O(n^2)   reverse sorted
*/

/*
    -------------------- important -------------------------
    stable -- it the key or values are same appear in the same order 
    i.e if 2 ->index 2
           2 -> index 5
           there order of appearance must be same
    same keys appear in the same order in sorted output as they appear in the input array to be sorted.
    
    In case of Selection sort ------------------> ----------------------------------
    it is not stable because if i consider
    5 2 3 5 1
    now it will swap 1 with the 5 order changed so not stable

    but if we place the minimum at its place and shift the rest of the element than it will be stable.
*/
int main(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // int min=INT_MAX;
    int k=0;
    for(int i=0;i<n-1;i++){
        int min=i; // selecting the starting index 
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){ // comparing starting index to find the minimum value 
                min=j;
            }
        }
        swap(arr[i],arr[min]); // minimum value will be swapped
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}