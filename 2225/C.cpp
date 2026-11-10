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
        string a, b;
        cin >> a >> b;
        int ans = 0;
        int i = 0;
        for(; i < n-1;){
            if(a[i] == b[i]){
                i++;
                continue;
            }
            if(a[i] == a[i+1]){
                if(b[i] != b[i+1]){
                    ans++;
                }
                i += 2;
                continue;
            }
            if(b[i] == b[i+1]){
                ans++;
                i += 2;
                continue;
            }
            if(a[i] != b[i]){
                ans++;
                i++;
            }
        }
        if(i == n-1){
            if(a[i] != b[i]){
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}