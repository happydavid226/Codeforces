/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

bool is_prime(ll x){
    for(ll i = 2; i*i <= x; i++){
        if(x%i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll x : a){
        if(is_prime(x)){
            cout << x << '\n';
        }
    }
    return 0;
}