/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        vector<int> a(n), b(k);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < k; i++) cin >> b[i];
        sort(a.rbegin(), a.rend());
        queue<int> q;
        for(int i = 0; i < n; i++) q.push(a[i]);
        sort(b.begin(), b.end());
        int cur = 0;
        ll sum = 0LL;
        while(!q.empty() && cur < k){
            for(int i = 0; i+1 < b[cur]; i++){
                sum += q.front();
                q.pop();
                if(q.empty()){
                    goto outer;
                }
            }
            q.pop();
            cur++;
            outer:;
        }
        while(!q.empty()){
            sum += q.front();
            q.pop();
        }
        cout << sum << '\n';
    }
    return 0;
}