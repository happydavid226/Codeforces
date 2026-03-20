#include <bits/stdc++.h>
using namespace std;
vector<int> dist,odd_levels, even_levels;
vector<bool> visited;
vector<vector<int>> adj;

void bfs(){
    queue<pair<int,int>> q;
    q.push({0,1});
    while(!q.empty()){
        auto qt = q.front(); q.pop();
        visited[qt.first] = true;
        if(qt.second&1) odd_levels[qt.second]++;
        else even_levels[qt.second]++;
        for(int nei : adj[qt.first]){
            if(!visited[nei]) q.push({nei,qt.second+1});
        }
    }
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        dist.assign(n,0),adj.assign(n, {}),odd_levels.assign(n+1,0),even_levels.assign(n+1,0),visited.assign(n, false);
        for(int i = 0; i+1 < n; i++){
            int u, v; cin >> u >> v; u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs();
        int ans = (*max_element(odd_levels.begin(), odd_levels.end())) + (*max_element(even_levels.begin(), even_levels.end()));
        cout << ans << '\n';
    }
    return 0;
}