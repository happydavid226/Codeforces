/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        int l = 1, r = n;
        vector<int> ans;
        while(l <= r){
            if(l == r) ans.push_back(l);
            else {
                ans.push_back(r);
                ans.push_back(l);
            }
            l++; r--;
        }
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i==n-1];
    }
    return 0;
}