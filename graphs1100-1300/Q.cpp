/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, m, k; cin >> n >> m >> k;
        k -= 2;
        bool flag = true;
        if(k < 0) flag = false;
        if(k == 0 && n != 1) flag = false;
        if(!(n-1 <= m && m <= n*(n-1)/2)) flag = false;
        if(k == 1 && m < (n*(n-1)/2)) flag = false;
        cout << (flag ? "YES\n" : "NO\n") << '\n';
    }
    return 0;
}