/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define mod 1000000007
using ll = long long;
using namespace std;
vector<ll> dp;
vector<int> parent,depth;
vector<bool> has_children;
vector<vector<int>> children;
vector<ll> ans;

ll solve(const int n){
    if(dp[n] != -1) return dp[n];
    if(!has_children[n]) return dp[n]=0;
    return dp[n]=(4+solve(children[n][0])%mod+solve(children[n][1])%mod)%mod;
}

int find_depth(const int node){
    if(depth[node] != -1) return depth[node];
    if(node == 0) return depth[node] = 0;
    return depth[node] = find_depth(parent[node]);
}

ll find_ans(const int node){
    if(ans[node]!=-1)return ans[node];
    if(node==0) return ans[node]=0;
    return ans[node]=(dp[node]+1+(find_ans(parent[node]))%mod)%mod;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        //cerr << "t is " << t << '\n';
        int n; cin >> n;
        dp.assign(n+1,-1LL);
        parent.assign(n+1,0);
        children.assign(n+1,{});
        ans.assign(n+1,-1);
        depth.assign(n+1,-1);
        children[0].push_back(1);
        has_children.assign(n+1, false);
        //cerr << "finished initializing every thing\n";
        for(int i = 1; i <= n; i++){
            int u, v; cin >> u >> v;
            if(u != 0) parent[u]=parent[v]=i, has_children[i]=true, children[i].push_back(u), children[i].push_back(v);
        }


        //for(int i = 0; i <= n; i++) cerr << has_children[i] << " \n"[i==n];

        //cerr << "finished reading input\n";
        parent[1]=0;
        for(int i = 1; i <= n; i++) dp[i] = solve(i);
        dp[0]=(dp[1]+1)%mod;
        //cerr << "finished finding dp\n";
        for(int i = 1; i <= n; i++){
            cout << find_ans(i) << ' ';
        }
        cout << endl;
    }
    return 0;
}