/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define MAXN 1001

int n, ans;
bool visited[MAXN][MAXN], contains[MAXN][MAXN];
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0,0,-1,1};

void dfs(int i, int j, int dir){
    if(i < 0 || j < 0 || i >= MAXN || j >= MAXN || visited[i][j]){
        return;
    }
    if(contains[i][j]){
        visited[i][j] = true;
        for(int k = 0; k < 4; k++){
            dfs(i+dx[k], j+dy[k], k);
        }
    } else {
        dfs(i+dx[dir], j + dy[dir], dir);
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int xi, yi; cin >> xi >> yi;
        contains[xi][yi] = true;
    }
    for(int i = 0; i < MAXN; i++){
        for(int j = 0; j < MAXN; j++){
            if(contains[i][j] && !visited[i][j]){
                ans++;
                visited[i][j] = true;
                for(int k = 0; k < 4; k++){
                    dfs(i+dx[k], j+dy[k], k);
                }
            }
        }
    }
    cout << ans-1 << '\n';
    return 0;
}