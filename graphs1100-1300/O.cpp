/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m; cin >> n >> m;
        vector<string>s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        bool flag = true;
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < m-1; j++){
                int cnt_ones = 0;
                for(int k = 0; k <= 1; k++){
                    for(int l = 0; l <= 1;l++){
                        if(s[i+k][j+l] == '1') cnt_ones++;
                    }
                }
                if(cnt_ones == 3) flag = false;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}