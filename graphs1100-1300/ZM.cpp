/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<int> deg(n,0);
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        deg[u]++; deg[v]++;
        adj[v][u] = adj[u][v] = 1;
    }
    int ans = 0;
    for(int k = 1; k <= 100; k++){
        vector<int> rmv;
        for(int i = 0; i < n; i++){
            if(deg[i] == 1){
                rmv.push_back(i);
            }
        }
        for(int x : rmv){
            for(int i = 0; i < n; i++){
                if(adj[x][i] == 1){
                    adj[x][i] = adj[i][x] = 0;
                    deg[i]--;
                    deg[x]--;
                }
            }
        }
        if(rmv.size() >= 1){
            ans++;
        } else {
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}