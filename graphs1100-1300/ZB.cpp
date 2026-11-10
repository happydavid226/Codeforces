/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> c;

int dfs(int node){
    if(visited[node]){
        return inf;
    }
    visited[node] = true;
    int mn = c[node];
    for(int nei : adj[node]){
        mn = min(mn, dfs(nei));
    }
    return mn;
}

int main(){
    cin >> n >> m;
    adj.assign(n, {});
    c.assign(n,0);
    visited.assign(n, false);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v; u--; v--;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    ll ans= 0LL;
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            ans += dfs(i);
        }
    }
    cout << ans << '\n';
    return 0;
}