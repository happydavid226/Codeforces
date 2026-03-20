/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int mex_array[200005], cnt[200005];
ll sum_next_mex[200005];
template <typename T>
void debug(const vector<T>& a){
    for(int i = 0; i < a.size(); i++){
        cerr << a[i] << " \n"[i==a.size()-1];
    }
}
pair<int,int> mex(const vector<int>& a){
    int n = a.size();
    vector<ll> cnt(n+1,0);
    int ans1 = -1, ans2 = -1;
    for(int i = 0; i < n; i++){
        if(a[i] <= n) cnt[a[i]]++;
    }
    for(int i = 0; i <= n; i++){
        if(cnt[i] == 0 && ans1 == -1) ans1 = i;
        else if(cnt[i] == 0 && ans1 != -1) {ans2 = i; break; }
    }
    if(ans2 == -1) ans2 = n+1;
    return {ans1, ans2};
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> adj[n];
        map<int,int> adj_cnt[n];
        ll sum = 0LL, ans_sum = 0LL;
        for(int i = 0; i < 200005; i++) mex_array[i] = 0, cnt[i] = 0, sum_next_mex[i] = 0LL;
        for(int i = 0; i < n; i++) {
            int li; cin >> li;
            adj[i].resize(li); 
            for(int j = 0; j < li;j++) cin >> adj[i][j], adj_cnt[i][adj[i][j]]++;
            pair<int,int> x = mex(adj[i]); 
            int u = x.first, v = x.second;
            cnt[u]++;
            mex_array[i] = u;
            sum_next_mex[u] += v;
            sum += u;
            //cerr << "the next mex is " << v << '\n';
        }
        /*
        d*/

        for(int i = 0; i < n; i++){
            for(int j = 0; j < adj[i].size(); j++){
                //cerr << "adj[i][j] is " << adj[i][j] << " and the mex array is " << mex_array[i] << '\n';
                ans_sum += sum*(n-1);
                if(adj[i][j] < mex_array[i] && adj_cnt[i][adj[i][j]] == 1){
                    ans_sum -= 1LL*mex_array[i]*(n-1);
                    ans_sum += 1LL*adj[i][j]*(n-1);
                }
                if(adj[i][j] <= 200004)
                    ans_sum += sum_next_mex[adj[i][j]] - 1LL*adj[i][j]*cnt[adj[i][j]];
                //cerr << "ans sum becomes " << ans_sum << '\n';
            }
        }
        cout << ans_sum << '\n';
    }
    return 0;
}