#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<vector<ll>,ll> mp;
ll solve(vector<ll> a){
    if(a.size() == 1){return 0LL; }
    vector<ll> b = a, c = a;
    ll x1 = b[0], x2 = -b[1];
    b.erase(b.begin());
    c.erase(c.begin()+1);
    if(mp.find(b) == mp.end()) mp[b] = solve(b);
    if(mp.find(c) == mp.end()) mp[c] = solve(c);
    return max(x1 + mp[b], x2+mp[c]);
}

int main(){
    int tt; cin >> tt;
    for(int  t= 1; t <= tt; t++){
        mp.erase(mp.begin(), mp.end());
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << solve(a) << '\n';
    }
    return 0;
}