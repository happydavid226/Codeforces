/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m;
        cin >>n >> m;
        vector<int> a(n);
        vector<int> x(m);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> x[i];
        }
        if(n == 1){
            cout << 0 << '\n';
            continue;
        }
        vector<int> idxes(n);
        iota(idxes.begin(), idxes.end(),0);
        sort(idxes.begin(), idxes.end(), [&](int i, int j){
            return a[i] > a[j];
        });
        vector<int> odd, even;
        for(int i = 0; i < n; i++){
            if(idxes[i]&1){
                odd.push_back(idxes[i]);
            } else {
                even.push_back(idxes[i]);
            }
        }
        ll mn_ans = accumulate(a.begin(), a.end(), 0LL);
        //cerr << "the starting answer is " << mn_ans << '\n';
        int cur_odd = 0, cur_even = 0;
        int odd_size = odd.size(), even_size = even.size();
        for(int i = 0; i < m; i++){
            if((x[i]+1)&1){
                //cerr << "never enters here \n";
                if(cur_odd < odd_size){
                    if(cur_odd == 0){
                        mn_ans -= a[odd[cur_odd]];
                    } else {
                        mn_ans = min(mn_ans, mn_ans - a[odd[cur_odd]]);
                    }
                }
                cur_odd++;
            } else {
                if(cur_even < even_size){
                    //cerr << "cur even is " << cur_even << " and the value is " << a[even[cur_even]] << '\n';
                    //cerr << mn_ans << " -> ";
                    if(cur_even == 0){
                        mn_ans -= a[even[cur_even]];
                    } else {
                        mn_ans = min(mn_ans, mn_ans - a[even[cur_even]]);
                    }
                    //cerr << mn_ans << '\n';
                }
                cur_even++;
            }
        }
        cout << mn_ans << '\n';
    }

    return 0;
}