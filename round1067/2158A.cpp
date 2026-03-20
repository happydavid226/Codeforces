#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, y, r;
    cin >> n >> y >> r;
    cout << min(n, y/2 + r) << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}