#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){ // time complexity is log(n) otherwise it would be min(a,b)
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int num1,num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    cout << "Gcd of the two numbers is: " << gcd(num1,num2);
}