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
        cout << *max_element(a.begin(), a.end()) * n << '\n';
    }
    return 0;
}