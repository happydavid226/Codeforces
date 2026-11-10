/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

ll sum(ll n){
    return n*(n+1)/2;
}

ll lcm(ll a, ll b){
    return a*b/__gcd(a,b);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, x, y;
        cin >> n >> x >> y;
        ll largest = n/x - n/lcm(x,y), lowest = n/y - n/lcm(x,y);
        //cerr << largest << " " << lowest << '\n';
        cout << sum(n) - sum(n-largest) - sum(lowest) << '\n';
    }
    return 0;
}