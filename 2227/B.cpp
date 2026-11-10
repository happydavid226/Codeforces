/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string s; cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                cnt1++;
            } else {
                cnt2++;
            }
        }
        if(cnt1 == cnt2){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}