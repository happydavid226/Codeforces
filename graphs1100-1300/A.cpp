/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> adj(n);
    vector<int> ans(k, 0), a(n), dist(n,0);
    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++) {
        cin >> a[i], a[i]--;
    }
    for(int i = 0; i < m; i++){
        int u , v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int fr = q.front();
        q.pop();
        for(int nei : adj[fr]){
            if(!visited[nei]){
                visited[nei] = true;
                dist[nei] = dist[fr]+1;
                ans[a[nei]] = max(ans[a[nei]], dist[fr]+1);
                q.push(nei);
            }
        }
    }
    for(int i = 0; i < k; i++){
        cout << ans[i] << " \n"[i==k-1];
    }
    return 0;
}