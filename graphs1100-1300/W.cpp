/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n; 
vector<string> grid;
vector<vector<bool>> visited;

void dfs(int i, int j){
    if(visited[i][j]) return;
    visited[i][j] = true;
    if(i > 0 && grid[i-1][j] == '1'){
        dfs(i-1,j);
    }    
    if(j > 0 && grid[i][j-1] == '1'){
        dfs(i, j-1);
    }
}


int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        grid.resize(n);
        visited.assign(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++){
            cin >> grid[i];
        }
        for(int i = 0; i < n; i++){
            if(!visited[i][n-1] && grid[i][n-1] == '1'){
                dfs(i,n-1);
            }
            if(!visited[n-1][i] && grid[n-1][i] == '1'){
                dfs(n-1,i);
            }
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    flag = false;
                }
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}