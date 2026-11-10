/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int n, m, k; 
    cin >> n >> m >> k; 
    vector<vector<pair<int,int>>> adj(n);
    for(int i = 0; i < m ;i++){
        int u, v, w; cin >> u >> v >> w; u--; v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int mn = inf+1;
    vector<bool> visited(n, false);
    for(int i = 0; i < k; i++){
        int x; cin >> x; x--;
        visited[x] = true;
    }
    for(int i = 0; i < n; i++){
        if(visited[i]){
            for(auto nei : adj[i]){
                if(!visited[nei.first]){
                    mn = min(mn, nei.second);
                }
            }
        }
    }
    cout << (mn == inf+1 ? -1 : mn) << '\n';
    return 0;
}