/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
int flpt(int x){ int ans = 1; while(ans <= x) ans*= 2; return ans; }
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int p, q, good_index = 0; cin >> p >> q;
        int original_p = p, original_q = q;
        vector<pair<int,int>> answers;
        bool done = false;
        if(p <= q){
            answers.push_back({p, flpt(q)});
            assert((p&flpt(q)) == 0);
            for(int bit = 30; bit >= 0; bit--){
                if((p&(1<<bit)) != 0 && (q&(1<<bit)) != 0){
                    if(!done){
                        for(int i = bit-1; i >= 0; i--){
                            if((p&(1<<i)) == 0) q |= (1<<i);
                        }
                        done = true;
                    }
                    q ^= (1<<bit);
                }
            }
            assert((q&p) == 0);
            answers.push_back({p, q});
            if((flpt(original_p)&original_q) == 0){
                answers.push_back({flpt(original_p),original_q});
            }
        } else {
            answers.push_back({flpt(p), q});
            assert((flpt(p)&q) == 0);
            for(int bit = 30; bit >= 0; bit--){
                if((p&(1<<bit)) != 0 && (q&(1<<bit)) != 0){
                    if(!done){
                        for(int i = bit-1; i >= 0; i--){
                            if((q&(1<<i)) == 0) p |= (1<<i);
                        }
                        done = true;
                    }
                    p ^= (1<<bit);
                }
            }
            assert((q&p) == 0);
            answers.push_back({p, q});
            if((flpt(original_q)&original_p) == 0){
                answers.push_back({original_p, flpt(original_q)});
            }
        }
        int min_diff = abs(answers[0].first - original_p) + abs(answers[0].second-original_q);
        for(int i = 1; i < (int)answers.size(); i++){
            int diff = abs(answers[i].first - original_p) + abs(answers[i].second - original_q);
            if(diff < min_diff){min_diff = diff; good_index = i; }
        }
        cout << answers[good_index].first << " " << answers[good_index].second << '\n';
    }
    return 0;
}