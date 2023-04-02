#include <bits/stdc++.h>
using namespace std;
bool Prime(int b){
    if(b==0||b==1) return false;
    for(int i=2;i<sqrt(b);i++){
        if(b%i==0){
            return false;
        }
    }
    return true;
}

void print(int a,int b){
    cout << "Prime Numbers:   ";
    for(int i=a;i<b;i++){
        if(Prime(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    // considering a is less than b
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    print(a,b);
}