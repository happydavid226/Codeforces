/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m; cin >> n >> m;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            sum += x;
        }
        if(n == 2 || n != m){
            cout << -1 << '\n';
            continue;
        }
        cout << 2*sum << '\n';
        cout << n << " " << 1 << '\n';
        for(int i = 1; i < n; i++){
            cout << i << " " << i+1 << '\n';
        }
    }
    return 0;
}