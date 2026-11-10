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
        vector<ll> a(n);
        queue<ll> q;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        ll mx_sum = 0;
        while(!q.empty()){
            int t = q.front();
            if(q.front() > 0){
                ll mx = 0;
                while(!q.empty() && q.front() > 0){
                    mx = max(mx, q.front());
                    q.pop();
                }
                mx_sum += mx;
            } else {
                ll mx = LLONG_MIN;
                while(!q.empty() && q.front() < 0){
                    mx = max(mx, q.front());
                    q.pop();
                }
                mx_sum += mx;
            }
        }
        cout << mx_sum << '\n';
    }
    return 0;
}