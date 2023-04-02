#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str,int i){
    if(i>=str.length()/2) return true;
    if(str[i]!=str[str.length()-i-1]) return false;
    palindrome(str,i+1);
}

int main(){
    string str="11011";
    if(palindrome(str,0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}