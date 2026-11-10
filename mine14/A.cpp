/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<ll> a(n), pa(n), b(n), pb(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
        pa[i] = (i == 0 ? a[i] : pa[i-1] + a[i]);
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        pb[i] = (i == 0 ? b[i] : pb[i-1] + b[i]);
    }
    int m; 
    cin >> m;
    for(int i = 0; i < m; i++){
        int type, l, r;
        cin >> type >> l >> r;
        l--; r--;
        if(type == 1){
            cout << (l == 0 ? pa[r] : pa[r] - pa[l-1]) << '\n';
        } else {
            cout << (l == 0 ? pb[r] : pb[r] - pb[l-1]) << '\n';
        }
    }
    return 0;
}