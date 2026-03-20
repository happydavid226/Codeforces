#include <bits/stdc++.h>
using namespace std;
void sayhello() { cout << "hello\n"; }

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int,int>> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                ans.push_back({1,j});
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(b[j] > b[j+1]){
                swap(b[j], b[j+1]);
                ans.push_back({2,j});
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){swap(a[i], b[i]), ans.emplace_back(3,i); }
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first <<" " << ans[i].second+1 << '\n';
    }
}

int main(){
    int tt; cin >> tt;
    while(tt--) solve();
    return 0;
}