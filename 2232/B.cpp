/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> hmax(n, 0LL);
        hmax[0] = a[0];
        ll rem = 0;
        for(ll i = 1; i < n; i++){
            if(a[i] >= hmax[i-1]){
                rem += a[i]-hmax[i-1];
                hmax[i] = hmax[i-1];
            } else {
                if(hmax[i-1] - a[i] <= rem){
                    rem -= (hmax[i-1] - a[i]);
                    hmax[i] = hmax[i-1];
                } else {
                    a[i] += rem;
                    hmax[i] = (i*hmax[i-1] + a[i])/(i+1); 
                    rem = (hmax[i-1]-hmax[i])*i - (hmax[i]-a[i]);
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << hmax[i] << " ";
        }
        cout << endl;
    }
    return 0;
}