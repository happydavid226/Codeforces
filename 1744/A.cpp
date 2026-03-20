/*Obeying God is the only way of success*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(51);
        vector<vector<int>> adj; adj.assign(52, {});
        for(int i = 0; i < n; i++) cin >> a[i], adj[a[i]].push_back(i);
        string s; cin >> s;
        bool flag = true;
        for(int i = 0; i <= 50; i++){
            for(int j = 0; j+1 < adj[i].size(); j++){
                if(s[adj[i][j]] != s[adj[i][j+1]]) flag = false;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}