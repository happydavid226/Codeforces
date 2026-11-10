/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<int,int> mp;
        set<int> only;
        for(int x : a){
            while( x > 1){
                only.insert(x);
                if(x&1){
                    x++;
                } else {
                    x /= 2;
                }
            }
            only.insert(1);
            only.insert(2);
            break;
        }
        for(int x : a){
            if(x == 1){
                mp[2]++;
            } else {
                while( x > 1){
                    if(only.count(x)) mp[x]++;
                    if(x&1){
                        x++;
                    } else {
                        x /= 2;
                    }
                }
            }
            mp[1]++;
        }
        vector<int> intersec;
        for(auto x : mp){
            if(x.second == n){
                intersec.push_back(x.first);
            }
        }
        int mx_ans = inf;
        for(int i : intersec){
            int ans = 0;
            for(int x : a){
                while(x != i){
                    if(x&1){
                        x += 1;
                    } else {
                        x /= 2;
                    }
                    ans++;
                }
            }
            mx_ans = min(mx_ans, ans);
        }
        cout << mx_ans << '\n';
    }
    return 0;
}