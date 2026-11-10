/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<vector<bool>> dp1(n, vector<bool>(2, false)), dp2(n, vector<bool>(2, false));
        for(int i = 0; i < 2; i++){
            dp1[i].assign(n,false);
            dp2[i].assign(n,false);
        }
        string u, d; cin >> u >> d;
        dp1[0][1] = true; dp2[0][0] = true;
        for(int i= 1; i < n; i++){
            dp1[i][1] = dp1[i-1][0] && u[i-1] == '>';
            dp2[i][0] = dp1[i][1] || dp2[i-1][1];
            dp2[i][1] = dp2[i-1][0] && d[i-1] == '>';
            dp1[i][0] = dp1[i-1][1] || dp2[i][1];
        }
        if(dp2[n-1][0] || dp2[n-1][1]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}