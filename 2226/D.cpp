/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;


int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        bool ok = true;
        vector<int> a(n), prefMax(n), suffMin(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            prefMax[i] = (i == 0 ? a[i] : max(prefMax[i-1], a[i]));
        }
        for(int i = n-1; i >= 0; i--){
            suffMin[i] = (i == n-1 ? a[i] : min(suffMin[i+1], a[i]));
        }        
        for(int i = 0; i < n; i++){
            if(prefMax[i] > suffMin[i] && (prefMax[i] + suffMin[i])%2 == 0){
                ok = false;
            }
        }
        if(ok){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}