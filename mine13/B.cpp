/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    if(b < a*m){
        cout << (n/m)*b + min(b, a*(n%m));
    } else {
        cout << a*n << '\n';
    }
    return 0;
}