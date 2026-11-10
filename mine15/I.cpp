/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k;
        cin >> n >> k;
        ll ans = 1LL;
        for(int i = 1; i <= k; i++){
            ans *= n;
            ans %= 1'000'000'007;
        }
        cout << ans << '\n';
    }
    return 0;
}