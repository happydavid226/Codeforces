/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        iota(b.begin(),b.end(),1);
        bool good_flag = true;
        for(int i= 0; i < n;i++){
            if(a[i] != b[i]){
                int j = i+1;
                bool flag = false;
                while(j >=1){
                    if(j&1)break;
                    if(a[j-1] == b[i]) {flag = true; break; }
                    j /= 2;
                }
                while(j <= n){
                    if(a[j-1] == b[i]) {flag = true; break; }
                    j *= 2;
                }
                good_flag &= flag;
            }
        }
        cout << (good_flag ? "Yes\n" : "No\n");
    }
    return 0;
}