#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000001; int n;
int pref[maxn];
int main(){
    iota(pref, pref+maxn, 0);
    for(int i = 1; i < maxn; i++) pref[i] ^= pref[i-1];
    cin >> n;
    vector<int> p(n);
    long long ans = 0;
    for(int  i = 0; i < n; i++) cin >> p[i], ans ^= p[i];
    for(int i = 1; i <= n; i++){
        int x = n%(i*2);
        if(x >= i)
            ans ^= pref[i-1],ans ^= pref[x-i];
        else ans ^= pref[x];
    }
    cout << ans << endl;
    return 0;
}