#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a == b) {cout << 0 << '\n'; continue; }
        if(a > b){
            if(a % 2 == 0 || b+1 != a) { cout << -1 << '\n'; continue; }
            cout << y << '\n';
            continue;
        }
        int diff = b -a ;
        int ans = 0;
        if(diff % 2 == 0) ans = min(x,y)*(diff/2) + x*(diff/2);
        else {
            if(a&1) ans = min(x,y)*(diff/2) + x*(diff-diff/2);
            else ans = min(x,y)*(diff-diff/2) + x*(diff/2);
        }
        cout << ans << '\n';
    }
}