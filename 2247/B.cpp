/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        ll n, k, m;
        cin >> n >> k >> m;
        if(k > m){
            cout << "NO\n";
            continue;
        }
        vector<ll> base(k), ans(n);
        for(int i = 0; i < k-1; i++){
            base[i] = 1;
        }
        base[k-1] = m - k + 1;
        for(int i = 0; i < n; i++){
            ans[i] = base[i%k];
        }
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            cout << ans[i] <<  " ";
        }
        cout << endl;
    }
    return 0;
}