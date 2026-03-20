/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), b(n);
        vector<ll> p(n,0LL);
        ll mx_ans = 0LL;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i]; 
        p[0] = b[0];
        for(int i = 1; i < n; i++) p[i] = 0LL + b[i] + p[i-1];
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            int max_difficulty = a[i];
            ll strikes_remaining = n-i;
            int levels = upper_bound(p.begin(),p.end(), strikes_remaining) - p.begin();
            mx_ans = max(mx_ans, 1LL*max_difficulty*levels);
        }
        cout << mx_ans << '\n';
    }
    return 0;
}