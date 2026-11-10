/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

string path;
int lasti, lastj, firsti, firstj;

bool check(int i, int j){
    return i >= 0 && j >= 0 && i < n && j < m && (grid[i][j] == '*' || grid[i][j] == 'S') && !visited[i][j];
}

void dfs(int i, int j){
    cerr << "visited " << i << "  " << j << '\n';
    visited[i][j] = true;
    lasti = i; lastj = j;
    vector<int> dx = {-1,1,0,0}, dy  = {0,0,-1,1};
    for(int k = 0; k < 4; k++){
        if(check(i+dx[k], j + dy[k])){
            if(dy[k] == -1){
                path.push_back('L');
            }
            if(dx[k] == -1){
                path.push_back('U');
            }
            if(dy[k] == 1){
                path.push_back('R');
            }
            if(dx[k] == 1){
                path.push_back('D');
            }
            dfs(i+dx[k], j + dy[k]);
        }
    }
}

int main(){
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool> (m, false));
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 'S'){
                firsti = i; firstj = j;
                dfs(i,j);
            }
        }
    }
    int absx = lasti - firsti;
    int absy = lastj - firstj;
    if(absy == -1){
        path.push_back('R');
    }
    if(absx == -1){
        path.push_back('D');
    }
    if(absy == 1){
        path.push_back('L');
    }
    if(absx == 1){
        path.push_back('U');
    }
    cout << path << '\n';
    return 0;
}