/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> cnt;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a.begin(), a.end());
        vector<int> b;
        b.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(a[i] != b.back()){
                b.push_back(a[i]);
            }
        }
        int m = b.size();
        int ans = cnt[b[0]];
        cerr << b[0] << " : " << cnt[b[0]] << " " << cnt[b[0]] << '\n';
        for(int i = 1; i < m; i++){
            int cur = max(0, cnt[b[i]]-cnt[b[i]-1]);
            cerr << b[i] << " : " << cnt[b[i]] << " " << cur << '\n';
            ans += cur;
        }
        cout << ans << '\n';
    }
    return 0;
}