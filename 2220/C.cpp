/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll p, q;
        cin >> p >> q;
        ll w = 2*p + 4*q + 1;
        for(ll i = 1; i *i <= 2*p + 4*q + 1; i++){
            if(w % i == 0){
                ll a = i;
                ll b= w/i;
                if(a >= 3){
                    if(b-a <= 2*p){
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