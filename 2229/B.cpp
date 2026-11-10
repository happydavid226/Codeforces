/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                swap(a[i], b[i]);
            }
        }
        ll ans = (ll) *max_element(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            ans += b[i];
        }
        cout << ans << '\n';
    }
    return 0;
}