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
        vector<vector<int>> adj(n);
        vector<int> degree(n, 0);
        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }
        bool found = false;
        for(int i = 0; i < n; i++){
            if(degree[i] == 1){
                int y = degree[adj[i][0]]-1;
                for(int nei : adj[adj[i][0]]){
                    if(degree[nei] != 1){
                        int x = degree[nei];
                        cout << x << " " << y << '\n'; 
                        found = true;
                        break;
                    }
                }
                break;
            }
            if(found) break;
        }
    }
    return 0;
}