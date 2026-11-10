/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int find_med(vector<int> x){
    sort(x.begin(), x.end());
    int n = x.size();
    return x[n/2];
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> x(n+1,0), a(n+1,0), b(n+1,0), c(n+1,0), dp(n+1,0);
        for(int i = 1; i <= n; i++){
            cin >> x[i];
        }
        int med = find_med(x);
        for(int i = 1; i <= n; i++){
            a[i] = a[i-1] + (x[i] < med);
            b[i] = b[i-1] + (x[i] == med);
            c[i] = c[i-1] + (x[i] > med);
        }
        for(int i = 1; i <= n; i++){
            for(int j = i-1; j >= 0; j--){
                int a1 = a[i] - a[j];
                int b1 = b[i] - b[j];
                int c1 = c[i] - c[j];
                if(a1 + b1 > c1 && b1 + c1 > a1 && ((a[j] + b[j] > c[j] && b[j] + c[j] > a[j]) || (j == 0))){
                    if((i-j) % 2 == 1){
                        dp[i] = max(dp[i], dp[j]+1);
                    }
                }
            }
        }
        cout << dp[n] << '\n';
    }
    return 0;
}