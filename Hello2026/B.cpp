#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        vector<int> a(n), cnt(n+1,0); for(int i = 0; i < n; i++) cin >> a[i], cnt[a[i]]++;
        set<int> contained, missing;
        int initial_mex = n;
        for(int i = 0; i < n; i++){
            if(cnt[i] == 0){
                initial_mex = i; break;
            }
        }
        cout << min(k-1, initial_mex) << '\n';
    }
    return 0;
}