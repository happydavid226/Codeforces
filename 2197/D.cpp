/*God will make me win */
#include <iostream>
#include <vector>
#define inf 1000000000
using ll = long long;
using namespace std;
int sq(int n){
    int i=1;
    for(; i*i < n; i++){}
    return i;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int b = sq(n);
        ll ans = 0LL;
        for(int i = 0; i < n; i++){
            if(a[i] > n-1) continue;
            if(a[i] < b){
                for(int s = 1; s < b; s++){
                    if(1LL*a[i]*s+i < n && a[a[i]*s+i] == s) ans++;
                }
            } else {
                for(int s = 1; s < b; s++){
                    if(1LL*a[i]*s+i < n && a[a[i]*s+i] == s) ans++;
                    if(1LL*i - 1LL*a[i]*s >= 0 && a[i-a[i]*s] == s) ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}