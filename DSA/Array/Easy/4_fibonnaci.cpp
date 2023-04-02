#include <bits/stdc++.h>
using namespace std;

int main(){
    // fibonacci sequence ---> 0 1 1 2 3 5 8 13 . . .
    // user will enter the total term user wanted
    // TC ---> O(n)

    int n;
    cin >> n;
    int a=0,b=1;
    if(n==0) cout << "0" << endl;
    else if(n==1) cout << "0 1" << endl;
    else{
        cout << a << " " << b << " ";
        for(int i=b;i<=n;i++){
            int c=a+b;
            cout << c << " ";
            a=b;
            b=c;
        }
    }
}