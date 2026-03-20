#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, m, k,l,r;
        cin >> n >> m >> k;
        l = k-1, r = n - k;
        ll cur = 0, ans = 1;
        while(l > 0 || r > 0){
            cur = 2*max(l,r)-1+min(l,r);
            if(cur <= m) ans = max(ans,l+r+1);
            if(l >= r) l--;
            else r--;
        }
        cout << ans << '\n';
    }
}