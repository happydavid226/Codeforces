#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        if(a == 1) cnt++;
        if(b == 1) cnt++;
        if(c == 1) cnt++;
        if(cnt >= 2){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}