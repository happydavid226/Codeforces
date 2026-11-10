#include <bits/stdc++.h>
using namespace std;

void dfs1(vector<vector<int>> & adj, vector<int>& dist, int node, int par){
    for(int nei : adj[node]){
        if(nei != par){
            dist[nei] = dist[node] + 1;
            dfs1(adj, dist, nei, node);
        }
    }
}

void dfs2(vector<vector<int>> & adj, int node, int kibamba, vector<int> & component, int par){
    component[node] = kibamba;
    for(int nei : adj[node]){
        if(nei != par){
            dfs2(adj, nei, kibamba, component, node);
        }
    }
}

int main(){
    int tt; cin >> tt;
    for(int tcase= 0; tcase < tt; tcase++){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        for(int i = 0; i < n-1; i++){
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> v(m);
        for(int i = 0; i < m; i++){
            cin >> v[i];
            v[i]--;
        }
        vector<int> dist(n, 0);
        dfs1(adj, dist, n-1, -1);
        vector<int> component(n, -1);
        for(int x : adj[0]){
            dfs2(adj, x, x, component, 0);
        }
        //cerr << "finishesdfs1" << endl;
        int mx = dist[0];
        for(int x : v){
            if(component[x] == component[n-1]){
                mx = max(mx, dist[x] + 1);
                //cerr << "the x : " << component[x] << endl;
                //cerr << "n-1 : " << component[n-1] << endl;
            }
        }
        cout << mx << '\n';
    }
}