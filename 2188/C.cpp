/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), b(n);
        int mi = inf, ma = 0;
        for(int i = 0; i < n;i++) cin >> a[i],b[i] = a[i], mi = min(mi, a[i]), ma = max(ma, a[i]);
        if(is_sorted(a.begin(), a.end())) {
            cout << "-1\n"; continue;
        }
        sort(b.begin(), b.end());
        vector<int> ans;
        for(int i = 0; i < n;i++){
            if(a[i] == b[i]) continue;
            int low_alone = min({abs(mi-a[i]), abs(mi-b[i])});
            int high_alone = min({abs(ma-a[i]), abs(ma-b[i])});
            int high_low = min(abs(ma-min(a[i], b[i])), abs(mi-(max(a[i], b[i]))));
            //int swap_alone = abs(a[i]-b[i]);
            ans.push_back(max({high_low, low_alone, high_alone}));
        }
        sort(ans.begin(), ans.end());
        cout << ans[0] << '\n';
    }
    return 0;
}