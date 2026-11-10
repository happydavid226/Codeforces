/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int f(int x){
    return 32 - __builtin_clz(x);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> tr(n);
        vector<int> cnt(35,0);
        for(int i = 0; i < n; i++){
            tr[i] = f(a[i]);
            cnt[tr[i]]++;
        }
        ll ans = 0LL;
        /* for(int i = 0; i <= 10; i++){
            cerr << i << " : " << cnt[i] << '\n';
        } */
        for(int i = 0; i < 35; i++){
            ans += 1LL*cnt[i]*(cnt[i]-1)/2;
        }
        cout << ans << '\n';
    }
    return 0;
}