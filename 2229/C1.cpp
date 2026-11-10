/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

bool parity(int x){
    return x > 0;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        queue<int> q;
        for(int i = n-1; i >= 0; i--){
            q.push(i);
        }
        int tof = 1, cur = n;
        vector<int> ans;
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            if(parity(tof) == parity(a[fr])){
                tof = (tof == 1 ? -1 : 1);
                ans.push_back(fr+1);
            }
        }
        cout << ans.size() << '\n';
        for(int x : ans ){
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}