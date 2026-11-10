/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
#define mod inf + 9
ll binpow(int k){
    ll ans = 1;
    if(k&1){
        ans = ans * 2 % mod;
    }
    ll half = binpow(k/2);
    ans = (half * half) % mod * ans % mod;
    return ans;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        bool found = false;
        if(a[0] == 1){
            cout << n+1 << " ";
            for(int i = 0; i < n; i++){
                cout << i+1 << " \n"[i==n-1];
            }
            continue;
        }
        for(int i = 0; i < n; i++){
            if(a[i] == 0 && ((i < n-1 && a[i+1] == 1)|| i == n-1)){
                for(int j = 0; j <= i; j++){
                    cout << j+1 << " ";
                }
                cout << n+1 << " ";
                for(int j = i+1; j < n; j++){
                    cout << j+1 << " ";
                }
                cout << '\n';
                found = true;
                break;
            }
        }
        if(!found){
            cout << -1 << '\n';
        }
    }
    return 0;
}