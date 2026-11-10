/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, odd, even;
vector<int> color;
vector<vector<int>> adj;

void dfs(int parent, int node){
    if(color[node] != -1){
        return;
    }
    color[node] = ((parent == -1 || color[parent]) == 0? 1 : 0);
    if(color[node] == 1){
        odd++;
    } else {
        even++;
    }
    for(int nei : adj[node]){
        dfs(node, nei);
    }
}
int main(){
    cin >> n;
    color.assign(n, -1);
    adj.assign(n, {});
    for(int i = 0; i+1 < n; i++){
        int u, v; cin>> u >> v; u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(-1,0);
    cout << 1LL*odd*even - (n-1) << '\n';
    return 0;   
}