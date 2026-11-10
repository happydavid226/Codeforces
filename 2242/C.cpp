/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define  MAXN 300005

int cnt[MAXN];

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int tot = 0, all = n, ans = 0, cur = 0;
        vector<int> tnd(n+2, 0);
        for(int i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i-1]){
                tnd[cnt[a[i]]]++;
                tot++;
            }
        }
        
        bool flag = false;
        while(all != 0){
            if(k >= all && (k-all)%(tot) == 0 && flag == false){
                ans++;
                flag = true;
            }
            cur++;
            if(tnd[cur] != 0){
                flag = false;
            }
            all -= tot;
            tot -= tnd[cur];
        }
        for(int i = 0; i < n; i++){
            cnt[a[i]] = 0;
        }
        cout << ans << endl;
    }
    return 0;
}