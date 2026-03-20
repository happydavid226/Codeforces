/*Obeying God is the only way of success*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n; char c; cin >> c;
        map<char,int> mp = {{'r',0}, {'y',1}, {'g',2}};
        string s; cin >> s;
        vector<int> a[3];
        for(int i = 0; i < n; i++){
            a[mp[s[i]]].push_back(i);
        }
        int mx_ans = 0;
        for(const int x : a[mp[c]]){
            auto it = lower_bound(a[mp['g']].begin(), a[mp['g']].end(), x);
            int ans = 0;
            if(it == a[mp['g']].end()){
                ans += n-x+a[mp['g']][0];
            } else {
                int index = *it;
                ans = index-x;
            }
            mx_ans = max(mx_ans,ans);
        }
        cout << mx_ans << '\n';
    }
    return 0;
}