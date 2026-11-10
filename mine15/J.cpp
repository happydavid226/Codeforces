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
        string s;
        cin >> s;
        int cnt_zeros = 0;
        for(int i = 0; i < n; i++){
            cnt_zeros += (s[i] == '0');
        }
        if((n%2 == 1) && s[n/2] == '0' && cnt_zeros > 1){
            cout << "ALICE\n";
            continue;
        }
        if(cnt_zeros > 0){
            cout << "BOB\n";
        } else {
            cout << "DRAW\n";
        }
    }
    return 0;
}