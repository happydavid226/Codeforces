/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

#define MAXN 5005
int n, a[MAXN];

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            int cnt_greater = 0, cnt_less = 0;
            for(int j = i+1; j < n; j++){
                if(a[j] > a[i]) cnt_greater++;
                if(a[j] < a[i]) cnt_less++;
            }
            cout << max(cnt_greater, cnt_less) << " \n"[i==n-1];
        }
    }
    return 0;
}