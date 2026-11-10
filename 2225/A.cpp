/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll x, y; 
        cin >> x >> y;
        if(y != 2*x){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}