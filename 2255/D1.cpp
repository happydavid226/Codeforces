/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define MOD 998244353

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string s; cin >> s;
        vector<ll> pdu(n,0LL), pud(n,0), puu(n,0), pdd(n,0),grp(n,0);
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                grp[i] = 1;
            }
        }
        if(n == 1){
            cout << 1 << '\n';
            continue;
        }
        pdu[0] = (grp[0] == 0 && grp[0+1] == 1);
        pud[0] = (grp[0] == 1 && grp[0+1] == 0);
        puu[0] = (grp[0] == 1 && grp[0+1] == 1);
        pdd[0] = (grp[0] == 0 && grp[0+1] == 0);
        for(int i = 1; i < n-1; i++){
            pdu[i] = (grp[i] == 0 && grp[i+1] == 1) + pdu[i-1];
            pud[i] = (grp[i] == 1 && grp[i+1] == 0) + pud[i-1];
            puu[i] = (grp[i] == 1 && grp[i+1] == 1) + puu[i-1];
            pdd[i] = (grp[i] == 0 && grp[i+1] == 0) + pdd[i-1];
        }
        pdu[n-1] = pdu[n-1-1];
        pud[n-1] = pud[n-1-1];
        puu[n-1] = puu[n-1-1];
        pdd[n-1] = pdd[n-1-1];
        vector<int> zero, one;
        for(int i = 0; i < n; i++){
            if(grp[i] == 0){
                zero.push_back(i);
            } else {
                one.push_back(i);
            }
        }
        ll ans = 0LL;
        for(int x : zero){
            if(x != n-1){
                if(grp[x+1] == 0){
                    ans += pdu[n-1] - pdu[x];
                    ans %= MOD;
                } else if(grp[x+1] == 1){
                    ans += puu[n-1] - puu[x];
                    ans %= MOD;
                }
            }
        }
        for(int x : one){
            if(x != n-1){
                if(grp[x+1] == 0){
                    ans += pdd[n-1] - pdd[x];
                    ans %= MOD;
                } else if(grp[x+1] == 1){
                    ans += pud[n-1] - pud[x];
                    ans %= MOD;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}