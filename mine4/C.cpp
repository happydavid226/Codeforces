#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n), maxi(n+1, 0), mini(n+1, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    maxi[0] = mini[0] = 0;
    for(int i = 0; i < n; i++){
        maxi[i+1] = max(maxi[i]-a[i], b[i]-mini[i]);
        mini[i+1] = min(mini[i]-a[i], b[i]-maxi[i]);
    }
    cout << maxi[n] << '\n';
}

int main(){
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}