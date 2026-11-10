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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int m = n;
        int k1 = 0, k2 = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(a[i] >  a[n/2]){
                k1++;
            } else if(a[i] < a[n/2]){
                k2++;
            }
        }
        cout << max(k1,k2) << '\n';
    }
    return 0;
}