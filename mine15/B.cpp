/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n,q;
        cin >> n >> q;
        vector<ll> a(n), p(n), pref(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            p[i] = (i == 0 ? a[i] : p[i-1] + a[i]);
            pref[i] = (i == 0 ? a[i] : max(a[i], pref[i-1]));
        }
        //cerr << "the prefix max is : "; for(int i = 0; i < n; i++) cerr << pref[i] << " \n"[i==n-1];
        for(int i  = 0; i < q; i++){
            ll k;
            cin >> k;
            int idx = upper_bound(pref.begin(), pref.end(),k) - pref.begin();
            //cerr << "idx  : " << idx << '\n';
            if(idx == 0){
                cout << 0 << ' ';
            } else if(idx == n){
                cout << p[n-1] << ' ';
            } else {
                cout << p[idx-1] << ' ';
            }
            //cerr << '\n';
        }
        cout << '\n';
    }
    return 0;
}