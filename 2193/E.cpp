/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n),dp(n+1, inf);
        for(int i = 0; i <  n; i++) cin >> a[i], dp[a[i]] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = i; j <= n; j+=i){
                dp[j] = min(dp[j], dp[i] + dp[j/i]);
            }
        }
        for(int i = 1; i <= n; i++) cout << (dp[i] == inf ? -1 : dp[i]) << " \n"[i==n];
    }
    return 0;
}