#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> cnt_zero;
 
bool comp(int a,int b){
    vector<int> va = adj[a], vb = adj[b];
    int n = va.size();
    unsigned long long suma = 0LL;
    unsigned long long sumb = 0LL;
    for(int i = 0; i < n; i++) suma += (int64_t)(1<<i)*(int64_t)va[29-i];
    for(int i = 0; i < n; i++) sumb += (int64_t)(1<<i)*(int64_t)vb[29-i];
    return suma < sumb;
}
 
int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        adj.assign(n, {});
        cnt_zero.assign(30, 0);
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int bit = 29; bit >= 0; bit--){
            int mask = (1<<bit);
            for(int i = 0; i < n; i++){
                if(a[i]&mask){}
                else cnt_zero[29-bit]++;
            }
        }
        for(int bit = 29; bit >= 0; bit--){
            int mask = (1<<bit);
            for(int i = 0; i < n; i++){
                if(a[i]&mask)
                    adj[i].push_back(cnt_zero[29-bit]);
                else adj[i].push_back(n-cnt_zero[29-bit]);
            }
        }
        vector<int> h(n,0);
        iota(h.begin(), h.end(),0);
        sort(h.rbegin(), h.rend(),comp);
        int good_index = h[0];
        long long ans = 0;
        for(int i = 0; i < n; i++)
            ans += (a[good_index] ^ a[i]);
        cout << ans << '\n';
    }
    return 0;
}