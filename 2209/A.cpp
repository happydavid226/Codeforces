/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

#define MAXN 101
int a[MAXN], n;
ll c, k;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n >> c  >> k;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(c >= a[i]){
                if(k > c-a[i]){
                    k -= c-a[i];
                    c *= 2;
                } else {
                    c += a[i]+k;
                    k = 0;
                }
            } else {
                break;
            }
        }
        cout << c << '\n';
    }
    return 0;
}