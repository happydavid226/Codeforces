#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1'000'000'007

ll binexp(ll x){
    ll base = 2LL;
    ll ans = 1LL;
    while(x > 0){
        if(x&1){
            ans = ans * base % mod;
        }
        x /= 2LL;
        base = base * base % mod;
    }
    return ans;
}

int main(){
    cout << binexp(mod-2) << '\n';
    return 0;
}