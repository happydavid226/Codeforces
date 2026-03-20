/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x, y; cin >>n >> x >> y;
        vector<int> a(n),b(n);
        ll sum = 0LL;
        ll sumb = 0LL;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = (a[i]/x)*y;
            sumb += b[i];
        }
        for(int i = 0; i < n; i++){
            sum = max(sum, sumb - b[i] + a[i]);
        }
        cout << sum << '\n';
    }
    return 0;
}