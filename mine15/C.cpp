/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        vector<int> a(n+1), pos(2*n + 1,-1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            pos[a[i]] = i;
        }
        int ans = 0;
        for(int i = 1; i <= 2*n; i++){
            for(int j = 1; j*j <= i; j++){
                if(i % j == 0){
                    int ai = i/j, aj = j;
                    if(pos[ai] != pos[aj] && pos[ai] + pos[aj] == i && pos[ai] != -1 && pos[aj] != -1){
                        ans++;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}