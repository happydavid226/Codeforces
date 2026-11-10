/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string s; cin >> s;
        int initial = 1;
        for(int i = 1; i < n;i++){
            if(s[i] != s[i-1]) initial++;
        }
        int mx_flag = 0, flag = 0;
        for(int i = 1; i < n-1; i++){
            if(s[i] != s[i-1] && s[i] != s[i+1]){
                flag = 1; 
                if(s[i-1] == s[i+1]){
                    flag = 2;
                }
                mx_flag = max(mx_flag, flag);
            }
        }
        //cerr << "initial " << initial << " mx_flag " << mx_flag << endl;
        cout << initial - mx_flag << endl;
    }
    return 0;
}