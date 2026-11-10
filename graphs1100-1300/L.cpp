/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m, ans;
vector<int> a, b, w;
vector<vector<int>> adj;
string s; 

void dfs(int node){
    //cerr << "we visit " << node << '\n';
    b[node] = s[node] == 'B';
    w[node] = s[node] == 'W';
    //cerr << "there is no problem\n";
    for(int nei : adj[node]){
        dfs(nei);
        b[node] += b[nei];
        w[node] += w[nei];
    }
    if(b[node] == w[node]) ans++;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        a.assign(n,0);
        adj.assign(n, {});
        b.assign(n, 0);
        w.assign(n,0);
        int cnt = 0;
        for(int i = 1; i <= n-1; i++){
            cin >> a[i];
            a[i]--;
            adj[a[i]].push_back(i);
        }
        cin >> s;
        ans = 0;
        dfs(0);
        cout << ans << '\n';
    }
    return 0;
}