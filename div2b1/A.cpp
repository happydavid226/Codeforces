/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1LL*inf*inf
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll ct, ch, cu;
        cin >> ct >> ch >> cu;
        ll ans = 0LL;
        ll tu = min(ct, cu);
        ans += tu * 4;
        ct -= tu;
        cu -= tu;

        ll th = min(ct, ch);
        ans += th * 5;
        ct -= th;
        ch -= th;

        ll tht = min(ct, th);
        ct -= tht;
        ans += tht * 2;

        if(ct > 0) ans += (ct-1) * 2 + 3;
        ans += (ch*3) + (cu*3);
        cout << ans << '\n';
    }
    return 0;
}