#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt; 
    for(int  t = 1; t <= tt; t++){
        int n, cnt_2025 = 0, cnt_2026 = 0, ans = 0, min_ans = 4; cin >> n;
        string a; cin >> a;
        for(int i = 0; i <= n-4; i++){
            if(a[i] == '2' && a[i+1] == '0' && a[i+2] == '2'){
                if(a[i+3] == '5') cnt_2025++;
                if(a[i+3] == '6') cnt_2026++;
            }
            ans = 0;
            if(a[i] != '2') ans++;
            if(a[i+1] != '0') ans++;
            if(a[i+2] != '2') ans++;
            if(a[i+3] != '6') ans++;
            min_ans = min(min_ans, ans);
        }
        if(cnt_2025 == 0 || cnt_2026 > 0) cout << 0 << '\n';
        else cout << min(cnt_2025, min_ans) << '\n';
    }
    return 0;
}