/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 1001
int adj[MAXN][MAXN], deg[MAXN], N;

int main(){
    int tt; cin >> tt; 
    for(int t = 1; t <= tt; t++){
        cin >> N;
        for(int i = 0; i < MAXN; i++){
            for(int j = 0; j < MAXN; j++){
                adj[i][j] = 0;
            }
        }
        for(int i = 0; i < N; i++){
            string s; cin >> s;
            for(int j = 0; j < N; j++){
                adj[i][j] = s[j]-'0';
            }
        }
        vector<int> ans(N);
        iota(ans.begin(), ans.end(),0);
        sort(ans.begin(), ans.end(), [&](int x, int y){
            if(adj[x][y] == 1) return x < y;
            return x > y;
        });
        for(int i = 0; i < N; i++){
            cout << ans[i]+1 << " \n"[i==N-1];
        }
    }
    return 0;
}