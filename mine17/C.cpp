/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int n, m, cnt, even, odd;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> color;

void dfs(int node, int c){
    color[node] = c;
    even += (c%2 == 0);
    odd += (c%2 == 1);
    visited[node] = true;
    for(int nei : adj[node]){
        if(color[nei] == color[node]){
            cnt = -1;
        }
        if(!visited[nei]) dfs(nei, (c == 0 ? 1 : 0));
    }
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n >> m;
        adj.assign(n, {});
        visited.assign(n, false);
        color.assign(n,-1);
        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                even = odd = cnt = 0;
                dfs(i,0);
                if(cnt != -1) ans += max(odd, even);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}