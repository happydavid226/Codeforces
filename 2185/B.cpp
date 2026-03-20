/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            int good_index = i;
            int mx = a[i];
            for(int j = i+1; j<n; j++){
                if(a[j] > mx){
                    mx = a[j];
                    good_index = j;
                }
            }
            if(good_index != i){
                swap(a[i], a[good_index]);
                break;
            }
        }
        //cerr << "a[0] : " << a[0] << ' ' << " a[1] : " << a[1] << '\n';
        int ans = 0, mx = 0;
        for(int i = 0; i <n ;i++) mx=max(mx,a[i]), ans += mx;
        cout << ans << '\n';
    }
    return 0;
}