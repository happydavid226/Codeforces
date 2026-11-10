/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n; n*=2;
        string s; cin >> s;
        vector<int> dp(n,0);
        vector<bool> visited(n, false);
        for(int i = 1; i < n; i++){
            dp[i] = dp[i-1];
            if(s[i] == '(' && s[i-1] == '('){
                dp[i]++;
            }
            if(s[i] == ')' && s[i-1] == ')'){
                dp[i]--;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            visited[dp[i]+1] = false;
            if(!visited[dp[i]]){
                ans++;
                visited[dp[i]] = true;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}