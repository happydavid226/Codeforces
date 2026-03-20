/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

ll lsb(ll x){
    return x&(-x);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll s, m; cin >> s >> m;
        if(lsb(s) < lsb(m)){
            cout << -1 << '\n';
            continue;
        }
        cout << (s+m-1)/m << '\n';
        continue;
        if(s % m == 0){
            cout << s/m << '\n';
            continue;
        }
    }
    return 0;
}