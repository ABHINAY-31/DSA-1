#include <bits/stdc++.h>
using namespace std;

void countSort(int n,int* (&arr),int *count,int pos){
    int vec[n] = {0};
    for(int i = 0; i < n; i++){
        int num = arr[i];
        int ans = 0;
        while(num >= pos){
            ans = num % 10;
            num = num / 10;
        }
        count[ans]++;
        vec[i] = ans; 
    }
    for(int i = 1; i <= sizeof(count) / sizeof(int); i++){
        count[i] += count[i-1];
    }
    int output[n] = {0};
    for(int i = n - 1; i >= 0; i++){
        output[--count[vec[i]]] = arr[i];
    }

    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // Radix Sort -> using counting sort at k time (k is max value in the array)

    int maxValue = *max_element(arr, arr+n);
    int count[maxValue+1] = {0};
    for(int pos = 1; maxValue >= pos; pos*10){
        countSort(n,arr,count,pos);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}