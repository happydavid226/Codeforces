/*God helps me*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll llmax(ll a, ll b){return (a > b ? a : b); }
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll a, b,x,y, k = 0LL,mx_ans = 1LL, ans = 0LL;
        cin >> a >> b; x = a, y = b;
        while(x >= 0LL && y >= 0LL){
            if(k&1LL){
                if(y >= (1LL<<k)){
                    y -= (1LL<<k);
                    ans++;
                } else break;
            } else {
                if(x >= (1LL << k)){
                    x -= (1LL<<k);
                    ans++;
                } else break;
            }
            k++;
        }
        mx_ans = llmax(mx_ans, ans);
        ans = 0, k = 0, x = a, y = b;
        while(x >= 0LL && y >= 0LL){
            if(k&1LL){
                if(x >= (1LL<<k)){
                    x -= (1LL<<k);
                    ans++;
                } else break;
            } else {
                if(y >= (1LL << k)){
                    y -= (1LL<<k);
                    ans++;
                } else break;
            }
            k++;
        }
        mx_ans = llmax(mx_ans, ans);
        cout << mx_ans << '\n';
    }
}