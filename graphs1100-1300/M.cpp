/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

vector<vector<int>> components, adj;
vector<int> component, post_order, p;
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    component.push_back(node);
    for(int nei : adj[node]){
        if(!visited[nei]){
            dfs(nei);
            break;
        }
    }
}

void dfs1(int node){
    //cerr << "node is " << node << '\n';
    for(int nei : adj[node]) dfs1(nei);
    post_order.push_back(node);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        p.assign(n,0);
        visited.assign(n, false);
        post_order.clear();
        components.clear();
        adj.assign(n, {});
        //cerr << "finished to initialize and gutegura\n";
        int root  = -1;
        for(int i = 0; i < n; i++){
            cin >> p[i]; p[i]--;
            if(p[i] == i) {root = i; continue; }
            adj[p[i]].push_back(i);
        }
        //cerr << "finishes making adjacency vector\n";
        assert(root !=-1);
        dfs1(root);
        reverse(post_order.begin(), post_order.end());
        //cerr << "post order things done \n";
        for(int i = 0; i < n; i++){
            if(!visited[post_order[i]]){
                component.clear();
                dfs(post_order[i]);
                components.push_back(component);
            }
        }
        cout << components.size() << '\n';
        for(auto comp : components){
            cout << comp.size() << '\n';
            for(int node : comp){
                cout << node+1 << " ";
            }
            cout << '\n';
        }
    }   
    return 0;
}