/*Obeying God is the only way of success*/
#include <bits/stdc++.h>
using namespace std;
int cnt_2(int n){
    int ans = 0;
    while(n > 0 && ((n&1) == 0)){
        ans++;
        n >>= 1;
    }
    return ans;
}
int main(){
    int tt; cin >> tt;
    for(int  t= 1; t <= tt; t++){
        int n, ans = 0, initial = 0; cin >> n;
        vector<pair<int,int>> a(n); for(int i = 0; i < n; i++) cin >> a[i].first, a[i].second = cnt_2(a[i].first), initial += a[i].second;
        vector<pair<int,int>> c(n); for(int i = 0; i < n; i++) {c[i] = {i+1, cnt_2(i+1)}; };
        sort(c.begin(), c.end(), [&](pair<int,int> a, pair<int,int> b){ return a.second > b.second; });
        int i = 0;
        while(n > initial && i < n){
            initial += c[i].second;
            i++;
            ans++;
        }
        if(n > initial){
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }
    }
    return 0;
}