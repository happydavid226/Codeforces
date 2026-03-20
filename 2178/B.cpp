#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s; cin >> s;
        int ans = 0, n = s.size();
        if(s[0] == 'u') ans++, s[0] = 's';
        if(s[n-1] == 'u') ans++, s[n-1] = 's';
        for(int i = 0; i < n; i++){
            if(s[i] == 's') continue;
            int cnt = 0;
            while(i < n && s[i] == 'u') cnt++, i++;
            i--;
            ans += cnt/2;
        }
        cout << ans << '\n';
    }
    return 0;
}