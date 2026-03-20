/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll sumx=0LL;
        for(int l = 0; l < n; l++){
            for(int  r = l; r < n; r++){
                int parent = a[l], ans = 1;
                for(int i = l+1; i <= r; i++){
                    if(!((a[i] == a[i-1]+1)||(a[i] <= a[i-1] && a[i] > parent))) ans++, parent = a[i];
                }
                sumx += ans;
                cerr << " ans is " << ans << '\n';
            }
        }
        cout << sumx << '\n';
    }
    return 0;
}