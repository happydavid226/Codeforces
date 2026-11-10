/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> topo;

void dfs(int node){
    if(visited[node]) return; 
    visited[node] = true;
    for(int nei : adj[node]) { dfs(nei); }
    topo.push_back(node);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n; m = n-1;
        adj.assign(n, {});
        visited.assign(n, false);
        topo.clear();
        for(int i = 0; i < m; i++){
            int u , v, x, y;
            cin >> u >> v >> x >> y;
            u--; v--;
            if(x >= y){
                adj[u].push_back(v);
            } else {
                adj[v].push_back(u);
            }
        }
        for(int i = 0; i < n; i++){
            if(!visited[i]) dfs(i);
        }
        reverse(topo.begin(), topo.end());
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[topo[i]] = n-i;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " \n"[i==n-1];
        }
    }
    return 0;
}