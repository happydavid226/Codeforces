#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 0; tcase < tt; tcase++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if(a[0] >= n){
            cout << 0 << '\n';
            continue;
        } else {
            cout << n << '\n';
        }
    }
    return 0;
}