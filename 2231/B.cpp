/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        //cout << t << " : ";
        int n, needed = 0; cin >> n;
        vector<int> a(n), p(n);
        vector<bool> chosen(n, false), done(n, false);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            p[i] = (i == 0 ? a[i] : max(p[i-1], a[i]));
            if(p[i] > a[i]){
                needed = max(needed, p[i] - a[i]);
                chosen[i] = true;
            }
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(chosen[i] && !done[i]){
                a[i] += needed;
                done[i] = true;
            }
            if(i < n-1 && a[i] > a[i+1]){
                a[i+1] += needed;
                done[i+1] = true;
            }
            if(i < n-1 && a[i] > a[i+1]){
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
        
    }
    return 0;
}