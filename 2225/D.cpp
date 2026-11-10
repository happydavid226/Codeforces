/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define mod 998244353
using ll = long long;
using namespace std;

ll f(ll n, ll m){
    return (m == 1 ? (n % 4 > m ? (n/4) + 1 : (n/4)) : (n % 4 > m ? (n/4) + 1 : (n/4)) + 1);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, x;
        cin >> n >> x;
        cout << (((f(x,3) % mod) * ((f(n+1,3) - f(x,3)) % mod)) + ((f(x,1) % mod) * ((f(n+1,1) - f(x,1)) % mod))) % mod << '\n';
    }
    return 0;
}