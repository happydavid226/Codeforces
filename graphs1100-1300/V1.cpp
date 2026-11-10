/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
#define pre ((i-1+n)%n)
using namespace std;



int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, lt= 0, gt = 0; cin >> n;
        string s; cin >> s;
        vector<bool> can(n, false);
        for(int i = 0; i < n; i++){
            if(s[i] == '>') gt++;
            if(s[i] == '<') lt++;
        }
        for(int i = 0; i < n; i++){
            can[i] = ((s[pre] == '-' || s[i] == '-') || (s[pre] == '>' && lt == 0) || (s[pre] == '<' && gt == 0));
        }
        int ans = 0; 
        for(int i = 0; i < n; i++){
            if(can[i])ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}