#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t =1; t <= tt; t++){
        int n; cin >> n;
        string s; cin >> s;
        map<char,int> mp;
        for(const char& x : s) mp[x]++;
        cout << n - mp[s.back()] << '\n';
    }
    return 0;
}