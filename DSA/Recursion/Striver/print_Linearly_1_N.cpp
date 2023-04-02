#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void print(){
    if(cnt==10){
        return;
    }
    cout << cnt << "\n";
    cnt++;
    print();
}
int main(){
    print();
}