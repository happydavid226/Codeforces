/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using ld = long double;
using namespace std;

int n, s; 
vector<int> p, c;

ld solve(int i, ld s){
    if(i < 0 || s <= 0){
        return 0;
    }
    return max(solve(i-1, s), solve(i-1, s*(1-((ld)p[i]/100))) + s*c[i]);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        p.assign(n, 0); c.assign(n, 0);
        for(int i = 0; i < n; i++){
            cin >> c[i] >> p[i];
        }
        cout << fixed << setprecision(15) << solve(n-1, 1) << '\n';
    }
    return 0;
}