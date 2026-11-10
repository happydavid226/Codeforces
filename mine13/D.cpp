/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n , k;
        cin >> n >> k;
        cout << (k%(n-1) == 0 ? k/(n-1) * n - 1 : k/(n-1) * n + k%(n-1)) << '\n';
    }
    return 0;
}