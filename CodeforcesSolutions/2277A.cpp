#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 0; tcase < tt; tcase++){
        int n, ki;
        cin >> n>> ki;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int used = 0;
        bool found = false;
        int ans = 0;
        for(int k = 0; k <= n; k++){
            //cerr << "k is " << k << endl;
            bool flag = false;
            int less_than = upper_bound(a.begin(), a.end(), k) - a.begin();
            //cerr << "less than is " << less_than << endl;
            if(less_than - used >= ki && find(a.begin(), a.end(), k) != a.end()){
                used += ki;
            } else {
                flag = true;
            }
            if(flag){
                found = true;
                ans = k;
                break;
            }
        }
        if(found){
            cout << ans << endl;
        }
    }
}