/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m;
vector<vector<bool>> visited;
vector<vector<int>> grid;

int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};

int  dfs(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || grid[i][j] == 0){
        return 0;
    }
    visited[i][j] = true;
    int ans = grid[i][j];
    for(int x = 0; x < 4; x++){
        ans += dfs(i+dx[x], j+dy[x]);
    }
    return ans;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n >> m;
        visited.assign(n, vector<bool>(m, false));
        grid.assign(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> grid[i][j];
            }
        }
        int mx_ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j]){
                    mx_ans = max(mx_ans, dfs(i,j));
                }
            }
        }
        cout << mx_ans << '\n';
    }
    return 0;
}