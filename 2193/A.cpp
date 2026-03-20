/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, s, x; cin >> n >> s >> x;
        vector<int> a(n);
        for(int i =0 ; i < n; i++) cin >> a[i];
        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum <= s && (s-sum)%x == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}