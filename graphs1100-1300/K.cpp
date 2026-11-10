/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m; cin >> n >> m;
        vector<int> deg(n,0), a(n), odds, visited(n,false);
        vector<vector<int>> adj(n);
        for(int i  = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++; deg[v]++;
        }   
        if(m%2 == 0){
            cout << 0 << '\n';
            continue;
        }
        function<int(int)> dfs = [&](int node){
            if(visited[node]) return 0;
            visited[node] = true;
            int ans = adj[node].size();
            for(int nei : adj[node]){
                ans += dfs(nei);
            }
            return ans;
        };
        int mn = inf;
        for(int i = 0; i < n; i++){
            if(deg[i]&1){
                mn = min(mn, a[i]);
            } else {
                for(int nei : adj[i]){
                    if(deg[nei]%2 == 0){
                        mn = min(mn, a[i]+a[nei]);
                    }
                }
            }
        }
        cout << mn << '\n';
    }
    return 0;
}