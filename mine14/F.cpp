/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        vector<int> a(n*(n-1)/2);
        for(int i = 0; i < n*(n-1)/2; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> ans;
        int j  = 0;
        for(int i = 0; i < n-1; i++){
            ans.push_back(a[j]);
            j += (n-i-1);
        }
        ans.push_back(a.back());
        assert(ans.size() == n);
        for(int i = 0; i < n; i++){
            cout << ans[i] << " \n"[i==n-1];
        }
    }
    return 0;
}