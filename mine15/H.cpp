/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s; 
        cin >> s;
        int n = s.size();
        map<char,int> pos = {{'1', -1}, {'2', -1}, {'3', -1}};
        int ans = n+1;
        for(int i = 0; i < n; i++){
            pos[s[i]] = i;
            int mn = min({pos['1'], pos['2'], pos['3']});
            if(mn != -1){
                ans = min(ans, i-mn+1);
            }
        }
        cout << (ans == n+1 ? 0 : ans) << '\n';
    }
    return 0;
}