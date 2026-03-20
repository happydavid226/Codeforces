#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll llmax(ll a, ll b){
    return (a > b ? a : b);
}

ll llmin(ll a, ll b){
    return (a < b ? a : b);
}

void solve(){
    ll n, k;
    cin >> n >> k;
    //cerr << "k is " << k << '\n';
    vector<ll> a(n),b(n), p(n), s(n);
    for(int i = 0; i< n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll best = a[0];
    ll sum = best;
    p[0] = best;
    //cerr << "best is " << best << '\n';
    for(int i = 1; i < n; i++)sum = llmax(sum+a[i], a[i]), best = llmax(best, sum), p[i] = sum;
    if(k%2==0){ cout << best << '\n'; return; }
    //cerr << "reaches here\n";
    ll best1 = a[n-1]; 
    sum = best1;
    s[n-1] = best1;
    for(int i = n-2; i >= 0; i--) sum =  llmax(sum + a[i], a[i]), best = llmax(best, sum), s[i] = sum;
    ll ans = p[0] + s[0] - a[0] + b[0];
    for(int i = 1; i < n; i++) ans = max(ans, p[i] + s[i] - a[i] + b[i]);
    cout << ans << endl;         
}

int main(){
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}