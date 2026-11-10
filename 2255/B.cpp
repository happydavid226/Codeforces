/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define MAXN 200'005
#define MOD 998244353

ll dp[MAXN][2][2];

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string s; cin >> s;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                for(int k = 0; k < 2; k++){
                    dp[i][j][k] = 0;
                }
            }
        }
        string s2 = s.substr(0,2);
        dp[1][0][0] = (ll)(s2 == "??" || s2 == "0?" || s2 == "?0" || s2 == "00");
        dp[1][0][1] = (ll)(s2 == "??" || s2 == "0?" || s2 == "?1" || s2 == "01");
        dp[1][1][0] = (ll)(s2 == "??" || s2 == "1?" || s2 == "?0" || s2 == "10");
        dp[1][1][1] = (ll)(s2 == "??" || s2 == "1?" || s2 == "?1" || s2 == "11");
        for(int i = 2; i < n; i++){
            dp[i][0][0] = ((s[i-1] == '0' || s[i-1] == '?') && (s[i] == '0' || s[i] == '?') ? dp[i-1][1][0] : 0);
            dp[i][0][1] = ((s[i-1] == '0' || s[i-1] == '?') && (s[i] == '1' || s[i] == '?') ? dp[i-1][0][0] : 0);
            dp[i][1][0] = ((s[i-1] == '1' || s[i-1] == '?') && (s[i] == '0' || s[i] == '?') ? dp[i-1][1][1] : 0);
            dp[i][1][1] = ((s[i-1] == '1' || s[i-1] == '?') && (s[i] == '1' || s[i] == '?') ? dp[i-1][0][1] : 0);
        }
        cout << (dp[n-1][0][0] + dp[n-1][0][1] + dp[n-1][1][0] + dp[n-1][1][1]) << endl; 
    }
    return 0;
}