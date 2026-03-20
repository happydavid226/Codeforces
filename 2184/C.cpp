#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
void solve(int x, int i){
    mp[x] = i;
    if(x == 1) return;
    if(mp[x/2] == 0) mp[x/2] = i,solve(x/2,i+1);
    if(mp[(x+1)/2] == 0) mp[(x+1)/2] = i, solve((x+1)/2,i+1);
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        mp.erase(mp.begin(), mp.end());
        int n, k; cin >> n >> k;
        solve(n,1);
        cout << mp[k]-1 << '\n';
    }
    return 0;
}