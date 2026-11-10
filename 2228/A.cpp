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
        int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            cnt_0 += (x == 0);
            cnt_1 += (x == 1);
            cnt_2 += (x == 2);
        }
        int ans = cnt_0;
        if(cnt_1 > cnt_2){
            ans += cnt_2 + ((cnt_1 - cnt_2)/3);
        } else {
            ans += cnt_1 + ((cnt_2 - cnt_1)/3);
        }
        cout << ans << '\n';
    }
    return 0;
}