#include <bits/stdc++.h>
using namespace std;
int n=10;
void print(){
    if(n==0)return;
    cout << n << "\n";
    n--;
    print();
}
int main(){
    print();
}