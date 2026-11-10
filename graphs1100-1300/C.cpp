/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n;
vector<int> ans, p, d, components;
vector<bool> visited;

int dfs(int x){
    if(visited[x]) return ans[x];
    visited[x] = true;
    if(x == p[x]){
        return ans[x] = 1;
    }
    return ans[x] = 1 + dfs(p[x]);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        p.assign(n+1,0);
        ans.assign(n+1,0);
        d.assign(n+1,0);
        visited.assign(n+1, false);
        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> d[i];
        }
        ll ans = 0LL;
        for(int i = 1; i <= n; i++){
            if(!visited[d[i]]){
                int cnt = dfs(d[i]);
                ans += cnt;
            }
            cout << ans << " \n"[i==n];
        }
    }
    return 0;
}