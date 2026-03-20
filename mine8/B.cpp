#include <bits/stdc++.h>
using namespace std;
void printvector(vector<int> a) { for(int x : a) cout << x << " "; cout << '\n';}
int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x;
        cin >> n >> x;
        if(n == 1) {cout << x << '\n'; continue; }
        if(x == 0) {for(int i = 0; i < n; i++) cout << 0 << ' '; cout << '\n'; continue; }
        vector<int> a(n);
        iota(a.begin(), a.end(), 0);
        if(__builtin_clz(n-1) > __builtin_clz(x)) a[n-1] = x;
        for(int bit = 29; bit >= 0; bit--){
            int mask = (1<<bit);
            if((x&mask) == 0) for(int i = 0; i < n; i++) a[i] |= mask, a[i]^=mask;
        }
        for(int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}