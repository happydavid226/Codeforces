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
        int cnt_ones = 0;
        int maxn, minn;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                cnt_ones++;
                continue;
            }
            if(i > 0 && i+1 < n){
                if(s[i-1] == '1' && s[i+1] == '1') cnt_ones++, s[i] = '1';
            }
        }
        maxn = cnt_ones;
        for(int i= 1; i+1 < n; i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                s[i] = '0';
                cnt_ones--;
            }
        }
        cout << cnt_ones << " " << maxn << '\n';
    }
    return 0;
}