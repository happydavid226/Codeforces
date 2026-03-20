#include <bits/stdc++.h>
using namespace std; 
using ll = long long;

int main(){
    int tt ;cin >> tt;
    for(int t = 1; t<=tt;t++){
        ll s, k, m, ans = -1; cin >> s >> k >> m;
        if(s > k){
            if((m/k)%2 == 0){
                ans = max(0LL, s - (m%k));
            } else {
                ans = max(0LL, k-(m%k));
            }
        } else {
            ans = s - (m%k);
            ans = max(0LL, ans);
        }
        cout << ans << '\n';
    }
}