/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        int data, flag = 0;
        for(int i = 0; i < n; i++) cin >> data, flag += (data==67);
        cout << (flag  ? "YES\n" : "NO\n");
    }
    return 0;
}