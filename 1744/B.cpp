/*Obeying God is the only way of success*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, qq, cnt_odd = 0, cnt_even = 0; cin >> n >> qq;
        ll sum = 0LL;
        vector<int>a(n); for(int i = 0; i < n; i++) cin >> a[i], sum = sum + a[i], cnt_odd += (a[i]%2 == 0 ? 0 : 1), cnt_even += (a[i]%2 == 0? 1 : 0);
        for(int q = 1; q <= qq; q++){
            int type, x;
            cin >> type >> x;
            if(type == 0){
                sum = sum + (1LL*cnt_even*x);
                if(x&1){
                    cnt_odd += cnt_even;
                    cnt_even = 0;
                }
            } else {
                sum = sum + (1LL*cnt_odd*x);
                if(x&1){
                    cnt_even += cnt_odd;
                    cnt_odd = 0;
                }
            }
            cout << sum << '\n';
        }
    }
    return 0;
}