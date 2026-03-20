#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int qq; cin >> qq;
    for(int q = 1; q <= qq; q++){
        ll x, k; cin >> x >> k;
        if(x >= k){cout << 1 << '\n'; continue; }
        ll prev = x;
        ll current = x*2;
        ll current_iteration = 2;
        while(current < k){
            ll temp = prev;
            prev = current;
            current = current + temp;
            current_iteration++;
        }
        cout << current_iteration << '\n';
    }
}