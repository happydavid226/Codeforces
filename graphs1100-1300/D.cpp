/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n;
vector<int> p, ans, component;
vector<bool> visited;
string s;
int cnt;

void dfs(int x){
    if(visited[x]) return;
    visited[x] = true;
    ans[x] = cnt;
    dfs(p[x]);
}

int F(int x){
    //cerr << "x is " << x << '\n';
    if(visited[x]){
        //cerr << "end of cycle\n";
        return 0;
    }
    visited[x] = true;
    component.push_back(x);
    return ans[x] = (s[x] == '0') + F(p[x]);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        //cerr << "t is " << t << endl;
        cin >> n;
        p.assign(n+1,0);
        ans.assign(n+1,0);
        visited.assign(n+1, false);
        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }
        cin >> s;
        s.insert(s.begin(), '0');
        for(int i = 1; i <= n; i++){
            component.clear();
            if(!visited[i]){
                ans[i] = F(i);
            }
            cnt = ans[i];
            for(int x : component){
                visited[x] = false;
            }
            dfs(i);
        }
        for(int i = 1; i <= n; i++){
            cout << ans[i] << " \n"[i==n];
        }
    }
    return 0;
}