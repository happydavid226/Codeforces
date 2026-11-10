/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;


int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int x, y; cin >> x >> y;
        int n = x + y; 
        if(n & 1){
            y--;
        } else {
            x--;
        }
        if(x > y || y < 0 || x < 0){
            goto outer;
        }
        cout << "YES\n";
        for(int i = 2; i <= x+1; i++){
            cout << 1 << " " << i << '\n';
            cout << i << " " << x+i << '\n';
        }
        for(int i = 2*x+2; i <= n; i++){
            cout << 1 << " " << i << '\n';
        }
        continue;
        outer:;
        cout << "NO\n";
    } 
    return 0;
}