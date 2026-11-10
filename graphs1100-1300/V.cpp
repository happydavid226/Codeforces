/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

vector<vector<int>> adj, adj_rev;
vector<bool> visited;
vector<int> topo;

void dfs(int node){
    if(visited[node]){
        return;
    }
    visited[node] = true;
    for(int nei: adj[node]){
        dfs(nei);
    }
    topo.push_back(node);
}

int dfs1(int node){
    if(visited[node]){
        return 0;
    }
    visited[node] = true;
    int ans = 1;
    for(int nei : adj_rev[node]){
        ans += dfs1(nei);
    }
    return ans;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string s; cin >> s;
        visited.assign(n, false);
        adj.assign(n, {});
        adj_rev.assign(n, {});
        for(int i = 0; i < n; i++){
            if(s[i] == '-'){
                adj[i].push_back((i+1)%n);
                adj[(i+1)%n].push_back(i);
                adj_rev[i].push_back((i+1)%n);
                adj_rev[(i+1)%n].push_back(i);
            } else if (s[i] == '<'){
                adj[(i+1)%n].push_back(i);
                adj_rev[i].push_back((i+1)%n);
            } else {
                adj[i].push_back((i+1)%n);
                adj_rev[(i+1)%n].push_back(i);
            }
        }
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                dfs(i);
            }
        }
        visited.assign(n, false);
        int ans = 0;
        while(!topo.empty()){
            int x = topo.back();
            topo.pop_back();
            if(visited[x]) continue;
            int cnt = dfs1(x);
            if(cnt > 1){
                ans += cnt;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}