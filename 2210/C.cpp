/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
ll lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int N, ans = 0; cin >> N;
        vector<ll> a(N), b(N);
        for(int i = 0; i < N; i++) cin >> a[i];
        for(int i = 0; i < N; i++) cin >> b[i];
        for(int i = 0; i < N; i++){
            if(i == 0){
                if(__gcd(a[i], a[i+1]) != a[i]) ans++;
            } else if (i == N-1){
                if(__gcd(a[i], a[i-1]) != a[i]) ans++;
            } else {
                ll gcdi = __gcd(a[i-1], __gcd(a[i], a[i+1])), gcd_left = __gcd(a[i-1], a[i]), gcd_right = __gcd(a[i], a[i+1]);
                if(gcdi == gcd_left && a[i] != gcd_right) ans++;
                else if(gcdi == gcd_right && a[i] != gcd_left) ans++;
                else if(lcm(gcd_left, gcd_right) != a[i]){
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}