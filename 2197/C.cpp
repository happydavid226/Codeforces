/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll p, q; cin >> p >> q;
        //cerr << 3*p << " and " << 2*q << '\n';
        if(3*p < 2*q || p == q || q < p){
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }
    return 0;
}