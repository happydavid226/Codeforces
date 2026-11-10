/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n, q; cin >> n >> q;
        vector<int> a(n), idxes(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        iota(idxes.begin(), idxes.end(), 0);
        stable_sort(idxes.begin(), idxes.end(), [&](int i, int j){
            return a[i] < a[j];
        });
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int bit = 31; bit >= 0; bit--){
                int bit1 = (((i&(1<<bit)) != 0) ? 1 : 0);
                int bit2 = (((idxes[i]&(1<<bit)) != 0) ? 1 : 0);
                if(bit1 != bit2){
                    ans = max({ans, 1<<bit});
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}