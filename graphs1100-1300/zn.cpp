/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

#define MAXN 5
int adj[MAXN][MAXN];

int main(){
    int m; cin >> m;
    for(int i= 0; i < m; i++){
        int u, v; cin >>u >> v;
        u--; v--;
        adj[u][v] = adj[v][u] = 1;
    }
    for(int i = 0; i < MAXN; i++){
        for(int j = i+1; j < MAXN; j++){
            for(int k = j+1; k < MAXN; k++){
                int ans = (adj[i][j] + adj[j][k] + adj[k][i]);
                //cerr << adj[i][j] << " " << adj[j][k] << " " << adj[k][i] << '\n';
                //cerr << "ans is " << ans << '\n';
                if(ans == 0 || ans == 3){
                    cout << "WIN\n";
                    //cerr << i+1 << " " << j+1 << " " << k + 1 << '\n';
                    return 0;
                }
            }
        }
    }
    cout << "FAIL\n";
    return 0;
}