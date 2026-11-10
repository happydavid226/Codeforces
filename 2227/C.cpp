/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int n;
vector<int> a, twos, threes, sixes, others;
vector<tuple<int,int,int>> dp;

void solve(int l, int r){
    int pos = (l+r)/2;
    if(r-l+1 >= 2){
        dp.push_back(make_tuple(pos, l, r));
        solve(l,pos-1);
        solve(pos+1,r);
    }
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        a.resize(n);
        sixes.clear();
        threes.clear();
        twos.clear();
        others.clear();
        dp.clear();
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 6 == 0){
                sixes.push_back(a[i]);
            } else if (a[i] % 3 == 0){
                threes.push_back(a[i]);
            } else if(a[i] % 2 == 0){
                twos.push_back(a[i]);
            } else {
                others.push_back(a[i]);
            }
        }
        vector<int> ans(n,-1);
        int l = 0, r = n-1;
        while(l <= r){
            while(!sixes.empty()){
                if(sixes.size() >= 2){
                    ans[l] = sixes.back(); sixes.pop_back();
                    ans[r] = sixes.back(); sixes.pop_back();
                    l++;
                    r--;
                } else {
                    ans[l] = sixes.back(); sixes.pop_back();
                    l++;
                }
                continue;
            }
            while(!twos.empty()){
                ans[l] = twos.back();
                twos.pop_back();
                l++;
                continue;
            }
            while(!threes.empty()){
                ans[r] = threes.back();
                threes.pop_back();
                r--;
                continue;
            }
            break;
        }
        for(int i = 0; i < n; i++){k
            if(ans[i] == -1){
                ans[i] = others.back();
                others.pop_back();
            }
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " \n"[i==n-1];
        }
    }
    return 0;
}