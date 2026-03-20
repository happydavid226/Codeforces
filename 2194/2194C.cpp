/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        vector<string> a(k);
        for(int i = 0; i < k; i++) cin >> a[i];
        vector<vector<int>> cnt(26,vector<int>(n,0));
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                cnt[a[i][j]-97][j]++;
            }
        }
        vector<int> divisors;
        for(int i = 1; i <= n; i++) if(n%i == 0) divisors.push_back(i);

        bool flag = false;
        for(int x : divisors){
            string ans = "";
            for(int j = 0; j < x; j++){
                for(int c = 0; c < k; c++){
                    bool ok = true;
                    for(int i = j; i < n; i+=x){
                        if(cnt[a[c][j]-97][i] == 0) ok = false;
                    } 
                    if(ok){ans += a[c][j]; break; }
                }
            }
            if(ans.size() == x){
                int num = n/x;
                for(int i = 0; i < num; i++){
                    cout << ans;
                }
                cout << '\n';
                break;
            }
        }        
    }
    return 0;
}