#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxValue = *max_element(arr , arr + n);
    int minValue = *min_element(arr , arr + n);
    if(maxValue < abs(minValue)){
        maxValue = abs(minValue);
    }
    int vecPos[maxValue + 1] = {0};
    int vecNeg[maxValue + 1] = {0};

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            vecPos[arr[i]]++;
        }
        else{
            vecNeg[abs(arr[i])]++;
        }
    }

    int output[n] = {0};
    int output1[n] = {0};

    for(int i = n-1; i >= 0; i--){
        if(arr[i] > 0){
            output[--vecPos[arr[i]]] = arr[i];
        }
        else{
            output1[--vecNeg[abs(arr[i])]] = abs(arr[i]);
        }
    }
    for(int i = 0 ; i < n; i++){
        cout << output[i] << " ";
        cout << output1[i] << " ";
    }
    
    cout << endl;
    for(auto i : arr){
        cout << i << " ";
    }
}