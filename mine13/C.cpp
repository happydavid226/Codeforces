/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    ll x;
    cin >> x;
    stack<int> digits;
    while(x > 0){
        digits.push(x%10);
        x /= 10;
    }
    ll ans = 0;
    if(!digits.empty()){
        if(digits.top() == 9){
            int t = digits.top();
            digits.pop();
            ans *= 10;
            ans += t;
        }
    }
    while(!digits.empty()){
        int t = digits.top();
        digits.pop();
        t = min(t, 9-t);
        ans *= 10;
        ans += t;
    }
    cout << ans << '\n';
    return 0;
}