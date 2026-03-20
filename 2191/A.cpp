/*Only God can give success*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        map<int,int> mp;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            mp[a[i]] = i%2;
        }
        sort(a.begin(), a.end());
        bool flag = true;
        for(int i = 0; i+1 < n;i++){
            if(mp[a[i]] == mp[a[i+1]]) flag = false;
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}