/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, qq; cin >> n >> qq;
        vector<int> a(n), b(n), p(n,0);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) a[i] = max(a[i], b[i]);
        for(int i = n-2; i >= 0; i--) a[i] = max(a[i], a[i+1]);
        p[0] = a[0];
        for(int i = 1; i < n; i++) p[i] = a[i] + p[i-1]; 
        for(int q = 0; q < qq; q++){
            int l, r; cin >> l >> r; l--; r--;
            if(l == 0) cout << p[r] << " \n"[q==qq-1];
            else cout << p[r] - p[l-1] << " \n"[q==qq-1];
        }
    }
    return 0;
}