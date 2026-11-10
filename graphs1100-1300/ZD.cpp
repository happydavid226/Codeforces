/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

vector<int> p;
vector<bool> visited;
int n;

void dfs(int i){
    if(visited[i]){
        return;
    }
    visited[i] = true;
    dfs(p[i]);
}

int main(){
    cin >> n; 
    p.resize(n);
    visited.assign(n, false);
    for(int i = 0; i < n; i++){
        cin >> p[i];
        p[i]--;
    }
    int ans =0;
    for(int i = 0; i < n; i++){
        if(!visited[i] && !visited[p[i]]){
            ans++;
            dfs(i);
        }
    }
    cout << ans << '\n';
    return 0;
}