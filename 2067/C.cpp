/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

bool contains7(ll x){
    while(x > 0LL){
        if(x%10 == 7){
            return true;
        }
        x /= 10;
    }
    return false;
}

ll nines[12];

int main(){
    nines[0] = 9LL;
    for(int i = 1; i < 12; i++){
        nines[i] = nines[i-1]*10+9;
    }
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n; cin >> n;
        if(contains7(n)){
            cout << 0 << '\n';
            continue;
        }
        int mn = inf;
        for(int k = 0; k < 12; k++){
            ll cur = nines[k];
            cerr << "cur is " << cur << '\n';
            int ops = 0;
            while(!contains7(cur)){
                cur += n;
                ops++;
                cerr << "cur becomes " << cur << " and ops " << ops << '\n';
            }
            mn = min(mn, ops);
        }
        cout << mn << '\n';
    }
    return 0;
}