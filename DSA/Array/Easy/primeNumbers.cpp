#include <bits/stdc++.h>
using namespace std;
// checking whether the number is prime or not -------------------------------
// time complexity is O(sqrt(n))
int prime(int a);
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if(prime(n)){
        cout << "It is a prime number.\n";
    }else cout << "Not a prime number.\n";
}
int prime(int a){
    if(a==0||a==1){
        return 0;
    }
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}