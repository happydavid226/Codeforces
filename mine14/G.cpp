/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
 
int get_largest_odd(int cnt_odd, int x){
    if(cnt_odd == 0) return 0;
    int i = 1;
    while(i+2 <= cnt_odd && i+2 <= x){
        i += 2;
    }
    return i;
}
int get_largest_even(int cnt_even, int x){
    int i = 0;
    while(i+2 <= cnt_even && i+2 <= x){
        i += 2;
    }
    return i;
}
 
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x; 
        cin >> n >> x;
        int cnt_odd = 0, cnt_even = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt_even += (a[i] % 2 == 0);
            cnt_odd += (a[i] % 2 != 0);
        }
        if(cnt_odd == 0){
            cout << "No\n";
            continue;
        }
        if(x & 1){
            if(cnt_odd >= x - get_largest_even(cnt_even, x)){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        } else {
            if(cnt_even >= x - get_largest_odd(cnt_odd, x)){
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}