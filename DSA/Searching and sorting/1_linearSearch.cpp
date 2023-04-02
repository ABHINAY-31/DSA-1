#include <bits/stdc++.h>
using namespace std;
// worst way to search for an element in the array (naive way)
// TC:   O(n)
int main(){
    int n;
    cout << "Enter the length of the array: ";
    cin >>  n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int num;
    cout << "Enter the searching value: ";
    cin >> num;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            cout << "--------------- Found ---------------\n";return 0;
        }
    }
    cout << "Not Found " << endl;
}