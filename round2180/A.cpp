#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int l, a, b;
        cin >> l >> a >> b;
        int ans = a;
        for(int i = 0; i < l; i++){
            a += b;
            a %= l;
            ans = max(ans, a);
        }
        cout << ans << '\n';
    }
    return 0;
}