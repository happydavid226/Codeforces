/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        vector<ll> score(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll ans = a[n-1];
        score[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--){
            score[i] = (i + a[i] < n ? a[i] + score[i+a[i]] : a[i]);
            ans= max(ans, score[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}