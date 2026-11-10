/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tst = 1; tst <= tt; tst++){
        string s; cin >> s;
        int n; n = s.size();
        int cnt4 = 0, cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            cnt4 += (s[i] == '4');
            cnt1 += (s[i] == '1' || s[i] == '3');
            cnt2 += s[i] == '2';
        }
        vector<int> suff(n);
        suff[n-1] = s[n-1] == '2';
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] + (s[i] == '2');
        }
        int cur = 0;
        int ans = min(cnt1, cnt2);
        for(int i = 0; i < n; i++){
            cur += (s[i] == '3' || s[i] == '1');
            ans = min(cur + suff[i] - 1, ans);
        }
        cout << cnt4 + ans << '\n';
    }
    return 0;
}