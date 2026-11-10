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
        string a, b;
        cin >> a >> b;
        vector<int> dp[2];
        dp[0].assign(n,inf);
        dp[1].assign(n,inf);
        dp[0][n-1] = inf;
        if(n == 1){
            cout << (a[0] != b[0]) << '\n';
            continue;
        }
        if(n == 2){
            cout << ((a[0] != b[0] && a[0] != a[1] && a[0] == b[1]) ? 2 : (((a[0] != b[0] && a[0] != a[1])) ? 1 : ((a[0] == b[0]) ? (a[1] != b[1]) : (a[0] == a[1] ? (b[0] != b[1]): 0)))) << '\n';
            continue;
        }
        dp[0][0] = (a[0] != a[1]) + (b[0] != b[1]);
        dp[1][0] = (a[0] != b[0]);
        dp[1][1] = dp[1][0] + (a[1] != b[1]);
        if(n >= 3) dp[0][1] = dp[1][0] + (a[1] != a[2]) + (b[1] != b[2]);
        for(int i = 2; i < n; i++){
            if(i < n-1) dp[0][i] = min(dp[0][i-2], dp[1][i-1]) + (a[i] != a[i+1]) + (b[i] != b[i+1]);
            dp[1][i] = min(dp[1][i-1], dp[0][i-2]) + (a[i] != b[i]);
        }
        cout << min(dp[0][n-2], dp[1][n-1]) << '\n';
    }
    return 0;
}