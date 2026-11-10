/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), cnt(n+3, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        bool flag = true;
        for(int i = 1; i <= n; i++){
            if(cnt[i] == 1){
                flag = false;
                break;
            }
            if(cnt[i] == 0){
                continue;
            }
            cnt[i+1] += cnt[i] - 2;
            cnt[i] = 2;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}