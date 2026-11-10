/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<ll>a(n), p(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            p[i] = (i == 0 ? a[i] : p[i-1] + a[i]);
        }
        string s; cin >> s;
        int l = 0, r = n-1;
        ll sum = 0LL;
        while(l < r){
            while(l < r && s[l] != 'L'){
                l++;
            }
            while(r > l && s[r] != 'R'){
                r--;
            }
            if(l >= r){
                break;
            }
            if(l == 0){
                sum += p[r];
            } else {
                sum += p[r] - p[l-1];
            }
            l++;
            r--;
        }
        cout << sum << '\n';
    }
    return 0;
}