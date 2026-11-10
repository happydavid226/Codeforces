/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000'000'000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int m, cnt;
vector<vector<int>> adj;
vector<int> order, mn,a;

void solve(int node, int l, int r){
    if(l == r){
        mn[node] = a[l];
        return;
    }
    int mid = (l + r)/2;
    solve(adj[node][0], l, mid);
    solve(adj[node][1], mid+1, r);
    if(mn[adj[node][0]] > mn[adj[node][1]]){
        swap(adj[node][0], adj[node][1]);
        cnt++;
    }
    mn[node] = min(mn[adj[node][0]], mn[adj[node][1]]);
}

void dfs(int node, int l, int r){
    if(l == r){
        order.push_back(a[node-m]);
        return;
    }
    int mid = (l + r)/2;
    dfs(adj[node][0], l, mid);
    dfs(adj[node][1], mid+1, r);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> m;
        adj.assign(2*m, {});
        mn.assign(2*m,m+1);
        a.assign(m,0);
        order.clear();
        cnt = 0;
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        for(int i = 1; i < 2*m; i++){
            if(i < m){
                adj[i].push_back(2*i);
                adj[i].push_back(2*i+1);
            }
        }
        solve(1, 0, m-1);
        dfs(1,0,m-1);
        if(!is_sorted(order.begin(), order.end())){
            cout << -1 << '\n';
        } else {
            cout << cnt << '\n';
        }
    }
    return 0;
}