/*God will make me win */
#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m; cin >> n >> m;
    if(m == 0){
        cout << n << " " << n << '\n';
        return 0;
    }
    ll mn = max(0LL, n - 2*m);
    ll done = (int)((sqrt(8*m+1LL) + 1)/2);
    ll rem = m - (done*(done-1)/2);
    if(rem > 0) done++;
    ll mx = n - done; 
    cout << mn << " " << mx << '\n';
    return 0;
}