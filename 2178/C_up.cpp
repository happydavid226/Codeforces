#include <bits/stdc++.h>
using ll = long long;
#define inf 1000000000
using namespace std;
void debug(vector<ll> a) {for(int i = 0; i < a.size(); i++) cerr << a[i] << " \n"[i==a.size()-1]; }
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<ll> a(n), p(n), s(n), pabs(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        p[0] = a[0]; pabs[0] = llabs(p[0]);
        s[n-1] = a[n-1];
        for(int i = 1;  i < n; i++){
            p[i] = p[i-1] + a[i];
            s[n-i-1] = s[n-i] + a[n-i-1];
            pabs[i] = pabs[i-1] + llabs(a[i]);
        }
        //cerr << "a "; debug(a);
        //cerr << "p "; debug(p);
        //cerr << "s "; debug(s);
        //cerr << "pabs : "; debug(pabs);
        ll ans = -1LL*inf*inf;
        cerr << " ans is " << ans << '\n';
        for(int i = 0; i < n;i++){
            if(i == 0) ans = max(ans, -s[i+1]);
            else if(i == n-1) ans = max(ans, pabs[n-2] - pabs[0] + a[0]);
            else ans = max(ans, pabs[i-1] - pabs[0] + a[0] - s[i+1]);
        }
        cout << ans << '\n';
    }
    return 0;
}