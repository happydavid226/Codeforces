/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m, h; cin >> n >> m >> h;
        vector<ll> a(n), b(m), c(m), d(n);
        set<int> updated;
        for(int i = 0; i <n; i++) cin >> a[i], d[i] = a[i];
        for(int i = 0; i < m; i++){
            cin >> b[i] >> c[i];
            b[i]--;
            updated.insert(b[i]);
            d[b[i]] += c[i];
            if(d[b[i]] > h){
                for(auto it = updated.begin();!updated.empty();){
                    int idx = *it;
                    d[idx] = a[idx];
                    it = updated.erase(it);
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << d[i] << " \n"[i==n-1];
        }
    }
    return 0;
}