/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, k, pb, ps;
vector<int> bodya, sasha, a, p;
vector<bool> visited_sasha, visited_bodya;

void dfs_sasha(int x){
    assert(x <= n);
    if(visited_sasha[x]) return;
    visited_sasha[x] = true;
    sasha.push_back(x);
    dfs_sasha(p[x]);
}

void dfs_bodya(int x){
    assert(x <= n);
    if(visited_bodya[x]) return;
    visited_bodya[x] = true;
    bodya.push_back(x);
    dfs_bodya(p[x]);
}


int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n >> k >> pb >> ps;
        p.assign(n+1,0); a.assign(n+1,0);
        visited_sasha.assign(n+1, false);
        visited_bodya.assign(n+1, false);
        sasha.clear(); bodya.clear();
        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        dfs_sasha(ps);
        dfs_bodya(pb);
        ll ans_sasha = 0LL, ans_bodya = 0LL, pref_sasha = 0LL, pref_bodya = 0LL;
        int m = sasha.size();
        for(int i = 0; i < min(m,k); i++){
            ans_sasha = max(ans_sasha, pref_sasha + (1LL*a[sasha[i]]*(k-i)));
            pref_sasha += a[sasha[i]];
        }
        m = bodya.size();
        for(int i = 0; i < min(m, k); i++){
            ans_bodya = max(ans_bodya, pref_bodya + (1LL*a[bodya[i]]*(k-i)));
            pref_bodya += a[bodya[i]];
        }
        if(ans_sasha == ans_bodya){
            cout << "Draw\n";
        } else if(ans_sasha > ans_bodya){
            cout << "Sasha\n";
        } else {
            cout << "Bodya\n";
        }
    }
    return 0;
}