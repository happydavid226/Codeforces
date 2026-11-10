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
        string a, b; cin >> a >> b;
        int sa = 0, sb = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            int cnt = (a[i] == '(') + (b[i] == '(');
            if(cnt == 2){
                sa++;
                sb++;
            } else if(cnt == 0){
                sa--;
                sb--;
            } else {
                if(sa < sb){
                    swap(sa, sb);
                }
                sa--;
                sb++;
            }
            if(sa < 0 || sb < 0) ok = false;
        }
        cout << (sa == 0 && sb == 0 && ok ? "YES\n" : "NO\n");
    }
    return 0;
}