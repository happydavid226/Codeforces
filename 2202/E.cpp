/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define mod 998244353LL
using ll = long long;
using namespace std;

ll binexp(ll x){
    ll base = 2LL, ans = 1LL;
    while(x > 0){
        if(x&1LL){
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        x >>= 1LL;
    }
    return ans;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string s; cin >> s;
        vector<ll> dp1, dp2(n,0LL);
        stack<char>st;
        dp2[1] = 1LL;
        ll ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                ans = (ans + binexp(i)) % mod;
                st.push(s[i]);
            } else {
                st.pop();
                if(st.size() == 0 && i+2 < n) dp2[i+2] = 1;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(s[i] == '(') {
                st.push(s[i]);
                continue;
            } else {
                st.pop();
                if(st.empty() && i+1 < n){
                    dp2[i+1] = 
                }
            }
        }
    }
    return 0;
}