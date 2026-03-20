#include <bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m, a, b, turns = 1, max_ans = (int)1e9;
        cin >> n >> m >> a >> b;
        vector<pair<int,int>> v = {{a,m}, {n-a+1,m}, {n,b}, {n,m-b+1}};
        for(pair<int,int>& p : v){
            int ans = 0;
            n = p.first, m = p.second;
            while(n>1) n = (n+1)/2, ans++;
            while(m>1) m = (m+1)/2, ans++;
            max_ans = min(max_ans,ans);
        }
        cout << 1+max_ans << '\n';
    }
    return 0;
}