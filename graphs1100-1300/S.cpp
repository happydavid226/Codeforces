/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define mod (inf + 7)

vector<int> a, b, posb;
vector<bool> visited;

void dfs(int node){
    if(visited[node]) return; 
    visited[node] = true;
    dfs(a[posb[node]]);
}

ll binpow(int k){
    if(k == 0) return 1LL;
    ll half = binpow(k/2);
    ll ans = half * half % mod;
    if(k&1) ans = ans * 2 % mod;
    return ans;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        a.resize(n+1); b.resize(n+1);
        posb.resize(n+1); visited.assign(n+1, false);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> b[i];
            posb[b[i]] = i;
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                ans++;
                dfs(i);
            }
        }
        cout << 1LL * binpow(ans) % mod << '\n';
    }
    return 0;
}