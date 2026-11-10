/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x, s;
        cin >> n >> x >> s;
        vector<bool> taken(x, false);
        vector<int> tables(x, s);
        string si; cin >> si;
        int curi = 0, cure = 0, curt = 0;
        int ans = 0, vol = 0;
        for(int i = 0; i < n; i++){
            if(si[i] == 'I'){
                while(curi < x && taken[curi]){
                    curi++;
                }
                if(curi < x){
                    tables[curi]--;
                    taken[curi] = true;
                }
            } else if(si[i] == 'E'){
                while(cure < x && tables[cure] == 0){
                    cure++;
                }
                if(cure >= x) continue;
                if(tables[cure] == s){
                    if(vol > 0){
                        vol--;
                        tables[cure]--;
                        taken[cure] = true;
                    }
                } else {
                    tables[cure]--;
                    taken[cure] = true;
                }
            } else {
                while(cure < x && tables[cure] == 0){
                    cure++;
                }
                if(cure >= x) continue;
                if(tables[cure] != s){
                    vol++;
                }
                tables[cure]--;
                taken[cure] = true;
            }
        }
        for(int i = 0; i < x; i++){
            ans += s - tables[i];
        }
        cout << ans << '\n';
    }
    return 0;
}