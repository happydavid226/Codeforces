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
        int first13 = -1, last2 = -1, cnt1 = 0, cnt2 = 0,cnt4 = 0,  n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '3' || s[i] == '1'){
                first13 = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '2'){
                last2 = i;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '4'){
                cnt4++;
            }
        }
        bool found2 = false, found13 = false;
        if(first13 != -1){
            for(int i = first13; i < n; i++){
                if(s[i] == '2') {
                    cnt1++;
                    found2 = true;
                }
            }
        }
        if(last2 != -1){
            for(int i = last2; i >= 0; i--){
                if(s[i] == '3' || s[i] == '1') {
                    found13 = true;
                    cnt2++;
                }
            }
        }
        cout << cnt4 + min(cnt1, cnt2) << '\n';
    }
    return 0;
}