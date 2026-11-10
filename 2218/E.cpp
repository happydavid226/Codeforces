/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        ll even_xor = 0, odd_xor = 0;
        ll mx_ans = 0;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i&1){
                odd_xor ^= a[i];
            } else {
                even_xor ^= a[i];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == i) continue;
                mx_ans = max(mx_ans, a[i]^a[j]);
            }
        }
        cout << mx_ans << '\n';
    }
    return 0;
}