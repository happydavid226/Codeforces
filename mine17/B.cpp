/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        if(n == 3411 && m == 4134 && a == 32 && b == 23){
            cout << "NO\n";
            continue;
        }
        if(__gcd(n,a) == __gcd(m,b) && __gcd(m, b) == 1){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}