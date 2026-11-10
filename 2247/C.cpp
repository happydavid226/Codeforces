/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; 
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                flag = false;
            }
        }
        if(flag){
            cout << 0 << '\n';
            continue;
        }
        int cnt10 = 0, cnt01 = 0, cnt00 = 0, cnt11 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1 && b[i] == 0){
                cnt10++;
            }
            if(a[i] == 0 && b[i] == 1){
                cnt01++;
            }
            if(a[i] == 1 && b[i] == 1){
                cnt11++;
            }
            if(a[i] == 0 && b[i] == 0){
                cnt00++;
            }
        }
        if(cnt10 == 0){
            goto after;
        }
        if(cnt10%2 == 1){
            cout << 1 << '\n';
            continue;
        } else {
            cout << 2 << '\n';
            continue;
        }
        after:
        if(cnt00 == 0 || cnt11 == 0){
            cout << -1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}