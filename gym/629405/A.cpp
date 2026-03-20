#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
    int f = a[0];
    int mx = 1;
    int m = 1;
    for(int i = 0; i < n; i++){
        if(a[i] == a[i+1]){
            m++;
            mx = max(mx, m);
        } else {
            m = 1;
        }
    }
    cout << (n - mx) << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}