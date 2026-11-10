/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int dist(int u, int v, vector<vector<int>>& adj, int n){
    vector<int> visited(n, false);
    queue<int> q,qu;
    q.push(u);
    qu.push(0);
    while(!q.empty()){
        int fr = q.front();
        int d = qu.front();
        q.pop();
        qu.pop();
        if(fr == v){
            return d;
        }
        for(int nei : adj[fr]){
            if(!visited[nei]){
                visited[nei] = true;
                q.push(nei);
                qu.push(d+1);
            }
        }
    }
    return -1;
}

int main(){
    int n, k; cin >> n >> k;
    vector<vector<int>> adj(n);
    for(int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(dist(i,j, adj, n) == k){
                ans++;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}