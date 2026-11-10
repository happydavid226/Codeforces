/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 100'005
int n;
int cnt[MAXN];
ll dp[MAXN];
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    dp[0] = 0;
    dp[1] = 1LL*cnt[1];
    for(int i = 2; i < MAXN; i++){
        dp[i] = max(dp[i-2] + 1LL*cnt[i]*i, dp[i-1]);
    }
    cout << dp[MAXN-1];
    return 0;
}