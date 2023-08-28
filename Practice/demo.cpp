#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string str1;
    cin >> str1;
    map<char, queue<int>> mp;

    for(int i = 0; i < str.length(); i++){
        mp[str[i]].push(i);
    }
    int cnt = 0;
    for(int i = 0; i < str1.length(); i++){
        queue<int> q = mp[str[i]];
        if(mp.find(str1[i]) != mp.end() && !q.empty()){
            if(i == q.front()){
                cnt += 2;
            }else cnt += 1;
            q.pop();
        }
    }

    cout << cnt << " ";
}