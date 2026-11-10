/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        vector<int> a(n);
        int cnt1 = 0, ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0 && a[i] == 1){
                ans++;
            }
            if(i == n-1 && a[i] == 1){
                ans++;
            }
            if(a[i] == 0){
                cnt1++;
            }
        }
        if(cnt1 < 2){
            cout << -1 << '\n';
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}