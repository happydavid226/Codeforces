/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1LL*inf*inf
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = 0;
        ll sum = 0LL;
        for(int i = n-1; i >= 0; i--){
            sum = max(0LL, sum + a[i]);
            if(a[i] > 0){
                ans++;
            } else {
                if(abs(sum) > 0) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}