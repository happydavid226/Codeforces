/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        n--;
        a.pop_back();
        vector<int> cnt1(n, 0), cnt2(n, 0), cnt3(n, 0), diff(n, 0);
        for(int i = 0; i < n; i++){
            cnt1[i] = (i == 0 ? (a[i] == 1) : (cnt1[i-1] + (a[i] == 1)));
            cnt2[i] = (i == 0 ? (a[i] == 2) : (cnt2[i-1] + (a[i] == 2)));
            cnt3[i] = (i == 0 ? (a[i] == 3) : (cnt3[i-1] + (a[i] == 3)));
            diff[i] = cnt3[i] - cnt2[i] - cnt1[i];
        }
        vector<int> suff(n, diff[n-1]);
        for(int i = n-2; i >= 0; i--){
            suff[i] = min(suff[i+1], diff[i]);
        }       
        bool flag = false;
        for(int i = 0; i < n-1; i++){
            if((cnt1[i] >= cnt2[i] + cnt3[i]) && suff[i+1] <= diff[i]){
                flag = true;
            }
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}