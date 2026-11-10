/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;



int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n), idxesa(n), idxesb(n), idxesc(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        iota(idxesa.begin(), idxesa.end(), 0);
        iota(idxesb.begin(), idxesb.end(), 0);
        iota(idxesc.begin(), idxesc.end(), 0);
        sort(idxesa.begin(), idxesa.end(), [&](int i, int j){return a[i] > a[j];});
        sort(idxesb.begin(), idxesb.end(), [&](int i, int j){return b[i] > b[j];});
        sort(idxesc.begin(), idxesc.end(), [&](int i, int j){return c[i] > c[j];});
        int mx = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if(idxesa[i] != idxesb[j] && idxesa[i] != idxesc[k] && idxesb[j] != idxesc[k]){
                        mx = max(mx, a[idxesa[i]] + b[idxesb[j]] + c[idxesc[k]]);
                    }
                }
            }
        }
        cout << mx << '\n';
    }
    return 0;
}