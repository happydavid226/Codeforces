/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, sum = 0LL, cnt1 = 0LL, possible1 = 0LL; 
        cin >> n;
        vector<ll> c((int)n);
        for(int i = 0; i < n; i++){
            cin >> c[i];
            sum += c[i];
        }
        if(sum < 3 || c[n-1] == 1){
            cout << 0 << '\n';
            continue;
        }
        if(n == 1){
            cout << c[0] << '\n';
            continue;
        }
        if(c[n-2] == 1){
            cout << (min(n-1, c[n-1]/2)) + c[n-1] << '\n';
            continue;
        }
        for(int i = 0; i < n; i++){
            if(c[i] == 1){
                cnt1++;
            } 
            possible1 += (c[i]-2)/2;
        }
        cout << (sum - cnt1) + min(cnt1, possible1) << '\n';
    }
    return 0;
}