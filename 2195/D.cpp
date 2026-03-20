/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<ll> f(n);
        ll sum_fn = 0;
        for(int i = 0; i < n; i++) cin >> f[i];
        sum_fn = f[0]+f[n-1];
        ll sum = (ll) (sum_fn)/(n-1);
        vector<int> diff;
        for(int i = 0; i+1 < n;i++){
            diff.push_back(f[i]-f[i+1]);
        }
        vector<int> ans(n);
        ll cur = 0LL;
        for(int i = 0; i+1 < n; i++){
            ans[i] = (int)((sum - diff[i]) - cur*2)/2;
            cur += ans[i];
        }
        ans[n-1] = (int)(sum-cur);
        for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i==n-1];
    }
    return 0;
}