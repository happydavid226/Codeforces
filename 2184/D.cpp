/*Only God can give success*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll dp[32][32];
int main(){
    bool flag = true;
    for(int i = 0; i <= 31; i++){
        dp[i][0] = dp[i][i] = 1;
        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    /* for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++) cerr << dp[i][j] << " \n"[j==5];
    } */
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        ll possible = 1;
        int bits_of_n = 32 - __builtin_clz(n);
        //cerr << "bits of n is " << bits_of_n << '\n';
        for(int bits = 2; bits <= bits_of_n; bits++){
            //cerr << " bits is " << bits << '\n';
            int allowed_ones = min(bits-1, k-bits);
            //cerr << "allowed ones is " << allowed_ones << '\n';
            if(allowed_ones >= 0) possible++;
            if(bits == bits_of_n) {/* cerr << "possible is before we continue : " << possible << '\n';  */continue; };
            for(int i = 1; i <= allowed_ones; i++){
                //cerr << "i is " << i << " and dp[bits-1][i] is " << dp[bits-1][i] << '\n'; 
                possible += dp[bits-1][i];
                //cerr << "possible is " << possible << '\n';
            }
        }
        cout << (n-possible) << '\n';        
    }
    return 0;
}