/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), idxes(n),ans(n);
        vector<ll> b(n,0LL);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = (i == 0 ? 0 : b[i-1] + a[i-1]);;
        }
        iota(idxes.begin(), idxes.end(),0);
        sort(idxes.rbegin(), idxes.rend(), [&](int i , int j) { return b[i] < b[j]; });
        for(int i = 0; i < n; i++){
            ans[idxes[i]] = i;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i]+1 << " \n"[i==n-1];
        }

    }
    return 0;
}