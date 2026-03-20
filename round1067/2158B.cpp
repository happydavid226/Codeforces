#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> cnt(2*n, 0);
    for(int i = 0; i < 2*n; i++){
        int data;
        cin >> data;
        cnt[data-1]++;
        //cerr << data-1 << ' ' << cnt[data-1] << endl;
    }
    int x, y, z; 
    x = y = z = 0;
    for(int i = 0; i < 2*n; i++){
        if(cnt[i] > 0){
            if(cnt[i]&1) x++;
            if(cnt[i]%4 == 2) y++;
            if(cnt[i]%4 == 0) z++;
        }
    }
    //for(int i = 0; i < 2*n; i++){
    //    cerr << i+1 << ':' << cnt[i] << endl;
    //} 
    //cerr << x << ' ' << y << ' ' << z << endl;
    int ans = x + 2*y + 2*z;
    if(x == 0 && (z&1)) ans -= 2;
    cout << ans << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}