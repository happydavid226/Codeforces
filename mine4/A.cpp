#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> pref(n+1), a(n);
        iota(pref.begin(), pref.end(),0);
        pref[r] = pref[l-1];
        for(int i = 0; i < n; i++) a[i] = pref[i+1] ^ pref[i];
        for(int i = 0; i < n; i++) cout << a[i] << " \n"[i == n-1];
    }
    return 0;
}