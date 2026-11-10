#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        long long cT, cH, cU;
        cin >> cT >> cH >> cU;
 
        long long ans = 3 * (cT + cH + cU);
 
        long long mu = min(cT, cU);
        ans -= 2 * mu;
        cT -= mu;
 
        long long mh = min(cT, 2 * cH);
        ans -= mh;
        cT -= mh;
 
        if (cT > 0) ans -= (cT - 1);
 
        cout << ans << "\n";
    }
}