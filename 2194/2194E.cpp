/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
pair<ll,vector<pair<int,int>>> min_path(vector<vector<int>>& a){
    int n = a.size(); int m = a[0].size();
    vector<vector<ll>> dp(n, vector<ll>(m));
    dp[0][0] = (ll)a[0][0];
    for(int j = 1; j < m; j++) dp[0][j] = dp[0][j-1]+a[0][j];
    for(int i = 1; i < n; i++) dp[i][0] = dp[i-1][0] + a[i][0];
    vector<pair<int,int>> path; path.push_back({0,0});
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(dp[i-1][j] > dp[i][j-1]){
                dp[i][j] = dp[i-1][j] + a[i][j];
                path.push_back({i-1,j});
            } else {
                dp[i][j] = dp[i][j-1] + a[i][j];
                path.push_back({i,j-1});
            }
        }
    }
    /* cerr << " a is \n";
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cerr << a[i][j] << " \n"[j==m-1];
    cerr << " dp is \n";
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cerr << dp[i][j] << " \n"[j==m-1]; */
    pair<ll,vector<pair<int,int>>> ans = {dp[n-1][m-1], path};
    return ans;
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        pair<ll,vector<pair<int,int>>> ans1 = min_path(a);
        int good_index = -1, max_num = -inf-1;
        for(int i = 0; i < ans1.second.size(); i++){
            auto x = ans1.second[i];
            if(a[x.first][x.second] > max_num){
                max_num = a[x.first][x.second];
                good_index= i;
            }
        }
        a[ans1.second[good_index].first][ans1.second[good_index].second] *= -1;
        
        pair<ll,vector<pair<int,int>>> ans2 = min_path(a);
        cout << ans2.first << '\n';
    }
    return 0;
}