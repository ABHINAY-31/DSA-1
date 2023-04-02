#include <bits/stdc++.h>
using namespace std;
int cnt=0;
// i>n return;
void print(string str){
    if(cnt==5){
        return;
    }
    cout << str << endl;
    cnt++;
    print(str);
}
int main(){
    string str="Abhinay";
    print(str);
}