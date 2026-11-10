/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        ll x, y, k; cin >> x >> y >> k;
        ll ans = 0;
        int cur = 0;
        while(cur < k && x * 2 <= y){
            ans += y % x;
            y++;
            x++;
            cur++;
        }
        if(k > cur){
            k -= cur;
            ans += (k*(y-x));
        }
        cout << ans << endl;
    }
    return 0;
}