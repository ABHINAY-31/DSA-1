#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vec[n];
    for(int i = 0; i < n ; i++){
        cin >> vec[i];
    }
    int maxValue = *max_element(vec , vec + n);
    int arr[maxValue+1] = {0};

    // counting the frequency of the elements
    for(int i = 0; i < n; i++){
        arr[vec[i]]++;
    }
    //position array
    for(int i = 1; i <= maxValue; i++){
        arr[i] += arr[i-1];
    }
    int output[n]; // my output array 
    for(int i = n-1; i >= 0 ; i--){
        output[--arr[vec[i]]] = vec[i];
    }
    int j = 0;
    for(auto i : output){
        vec[j++] = i;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
}