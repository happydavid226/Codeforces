/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        int ans = 0;
        for(int i = 0; i+1 < n; i++){
            if(a[i] == a[i+1] || a[i+1] == 7-a[i]){
                if(i+2 < n){
                    for(int x = 1; x <= 6; x++){
                        if(x != a[i+2] && x != a[i] && x != 7-a[i+2] && x != 7-a[i]) a[i+1] = x;
                    }
                } else {
                    for(int x = 1; x <= 6; x++){
                        if(x != a[i] && x != 7-a[i]) a[i+1] = x;
                    }
                }
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}