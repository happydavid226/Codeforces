/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s; cin >> s;
        int n = s.size();
        int cur1 = 0, cur2 = 0, cur3 = 0, cur4 = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '4'){
                cur4++;
            }
            if(s[i] == '3'){
                cur3++;
            }
            if(s[i] == '2'){
                cur2++;
            }
            if(s[i] == '1'){
                cur1++;
            }
            if(cur2 >= cur1 + cur3){
                ans += cur1 + cur3;
                cur2 = cur1 = cur3 = 0;
            }
        }
        ans += min(cur1 + cur3, cur2);
        ans += cur4;
        cout << ans << '\n';
    }
    return 0;
}