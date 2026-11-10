/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Good practice for speed
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll p, q;
        cin >> p >> q;
        ll w = 2*p + 4*q + 1;
        for(ll i = 1; i * i <= w; i++){ // i is the smaller factor 'a'
            if(w % i == 0){
                ll a = i;
                ll b = w / i;
                if(a >= 3){ 
                    ll diff = (b - a) / 2; // This is |m - n|
                    
                    // FIX 1: The condition is diff <= p (not b-a <= p)
                    // FIX 2: Parity must match: (p - diff) must be even
                    if(p >= diff && (p - diff) % 2 == 0){
                        cout << (a-1)/2  << " " << (b-1)/2 << '\n';
                        goto outer;
                    }
                }
            }
        }
        cout << -1 << '\n';
        outer:;
    }
    return 0;
}