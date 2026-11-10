/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using ld = long double;
using namespace std;

int main(){
    int n;
    ld l;
    cin >> n >> l;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ld ans1 = max((ld)abs(0-(ld)a[0]), (ld)max((ld)0, (ld)abs(l-(ld)a[n-1])));
    ld ans = 0;
    for(int i = 1; i < n; i++){
        ans = max(ans, (ld)a[i]-(ld)a[i-1]);
    }
    cout << fixed << setprecision(16) << max(ans/2,ans1) << '\n';
    return 0;
}