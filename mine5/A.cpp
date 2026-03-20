#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, k;
        cin >> n >> k;
        //cerr << "n is " << n << endl;
        vector<ll> q(n), r(n);
        //cerr << "finished initializing the vectors\n";
        for(int i = 0; i < n; i++) cin >> q[i];
        for(int i = 0; i < n; i++) cin >> r[i];
        sort(q.rbegin(), q.rend());
        sort(r.begin(), r.end());
        int i = 0, j = 0;
        int ans = 0;
        //cerr << "reaches here\n";
        for(;i < n && j < n;){
            //cerr << r[j]+1 << ' ' << q[i] << ' ' << k-r[j] << endl;
            if(((r[j]+1)*q[i]) <= k - r[j]){
                i++;
                j++;
                ans++;
            } else {
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}