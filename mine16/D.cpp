/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = -1;
        int l = 0, r = n-1;
        int mn = 1, mx = n;
        while(l+1 < r){
            bool done = false;
            if(a[l] == mn){
                l++;
                mn++;
                done = true;
            }
            if(a[r] == mn){
                mn++;
                r--;
                done = true;
            }
            if(a[l] == mx){
                mx--;
                l++;
                done = true;
            }
            if(a[r] == mx){
                mx--;
                r--;
                done = true;
            }
            if(done){
                continue;
            } else {
                cout << l+1 << " " << r+1 << '\n';
                goto outer;
            }
        }
        cout << -1 << '\n';
        outer:;
    }
    return 0;
}