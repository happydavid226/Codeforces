/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        cout << n - (n/k) << '\n';
    }
    return 0;
}