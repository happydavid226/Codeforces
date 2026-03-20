#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll a, b, c; cin >> a >> b >> c;
        ll ans = -1;
        if(a < b && b < c){
            ans = max(0LL, a-(c%b));
        } else if(a < c && c > b){
            ans = max(0LL, a-(c%b));
        } else if(a > b && a < c){
            if((c/b)%2 == 1){
                ans = max(0LL, b - (c%b));
            } else {
                ans = (a - (c%b));
            }
        } else if (a < b && b > c){
            ans = max(0LL, a - (c%b));
        } else if(a > b && b < c){
            if((c/b)%2 == 1){
                ans = max(0LL, b - (c%b));
            } else {
                ans = max(0LL, a - (c%b));
            }
        } else if(a > b && b > c){
            ans = max(0LL, a - c);
        } else if(a == b){
            if(a == c){
                ans = a;
            } else if(a > c){
                ans = max(0LL, a-c);
            } else {
                ans = max(0LL, a -(c%b));
            }
        } else if(a == c){
            if(a > b){
                if((c/b)%2 == 1){
                    ans = max(0LL, b -(c%b));
                } else {
                    ans = max(0LL, a -(c%b));
                }
            } else {
                ans = 0;
            }
        } else if(b == c){
            if(a > b){
                ans = min(a,b);
            } else {
                ans = min(a,b);
            }
        }
        assert(ans != -1LL);
        cout << ans << '\n';
    }
    return 0;
}