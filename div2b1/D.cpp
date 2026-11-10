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
        vector<int> a(n), pref(n,0), vis(n,0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pref[i] = (i == 0 ? i : ((a[i] >= a[pref[i-1]]) ? i : pref[i-1]));
        }
        int ans  = 0;
        for(int i = n-1; i >= 0; i--){
            if(!vis[pref[i]]){
                ans++;
                vis[pref[i]] = 1;
            }
        }   
        cout << ans << '\n';
    }
    return 0;
}