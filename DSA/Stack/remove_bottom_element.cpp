#include <bits/stdc++.h>
using namespace std;
void remove(stack<int> &s,int n){
    if(s.empty())return;
    int ans=s.top();
    s.pop();
    remove(s,n-1);
    if(n>1){
        s.push(ans);
    }
}
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    remove(s,6);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}