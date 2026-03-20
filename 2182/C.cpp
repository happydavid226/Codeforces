/*God will help me*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, ans = 0LL; cin >> n;
        vector<ll> a(n),b(n),c(n),down(n,0);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];
        ll first = 0, second = 0;
        for(int i = 0; i < n; i++){
            bool flag1 = true, flag2 = true;
            for(int j = 0; j < n; j++){
                if(a[j] >= b[(j+i)%n]) flag1 = false;
            }
            for(int j = 0; j < n; j++){
                if(b[j] >= c[(j+i)%n]) flag2 = false;
            }
            if(flag1) first++;
            if(flag2) second++;
        }
        
        cout << (first*second*n) << '\n';
    }
}