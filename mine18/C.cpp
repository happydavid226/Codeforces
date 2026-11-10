/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n), pref(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pref[i] = (i == 0 ? a[i] : pref[i-1] + a[i]);
    }
    int ans = 0;
    //cerr << "pref : "; for(int i = 0; i < n; i++) cerr << pref[i] << " \n"[i==n-1];
    for(int i = 0; i < n; i++){
        int idx = upper_bound(pref.begin(), pref.end(), pref[i] + t - a[i]) - pref.begin();
        ans = max(ans, idx-i);
    }
    cout << ans << '\n';
    return 0;
}