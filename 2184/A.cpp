#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    vector<int> dp(10005,0);
    dp[4] = dp[6] = 1;
    for(int i = 6; i <= 10003; i++) dp[i] = max(dp[i], max(dp[i-4], dp[i-6]));
    for(int t = 1; t <= tt; t++){
        int n, ans; cin >> n;
        if(n <= 3) ans = n;
        else if(n%4 == 0 || n%6==0 || dp[n]) ans = 0;
        else if(n&1) ans = 1;
        else ans = 2;
        cout << ans << '\n';
    }
    return 0;
}