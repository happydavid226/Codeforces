/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

void chmax(string& a, const string& b){
    if(a.size() < b.size()){
        a = b;
    }
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        map<char,int> cnt;
        cin >> cnt['R'] >> cnt['G'] >> cnt['B'];
        vector<char> s = {'R', 'G', 'B'};
        int r = cnt['R'], b = cnt['B'], g = cnt['G'];
        if(r == 0 || g == 0 || b == 0){
            sort(s.begin(), s.end(), [&](const char& a, const char& b){
                return cnt[a] > cnt[b];
            });
            cout << s[0];
            cnt[s[0]]--;
            while(cnt[s[0]] && cnt[s[1]]){
                cout << cnt[s[1]] << cnt[s[0]];
                cnt[s[0]]--;
                cnt[s[1]]--;
            }
            cout << '\n';
            continue;
        }
        string ans = "";
        sort(s.begin(), s.end());
        do {
            string sub_ans = "";
            for(const char& x : s) sub_ans.push_back(x);
            int cur = 2;
            for(auto& x : cnt) x.second--;
            while(true){
                if(cnt[sub_ans[cur-1]]){
                    cnt[sub_ans[cur-1]]--;
                    sub_ans.push_back(sub_ans[cur-1]);
                    cur++;
                } else {
                    break;
                }
            }
            chmax(ans, sub_ans);
            cnt['R'] = r; cnt['G'] = g; cnt['B'] = b;
        } while(next_permutation(s.begin(), s.end()));
        vector<string> remaining;
        cnt['R'] = r; cnt['G'] = g; cnt['B'] = b;
        for(const char& x : s){
            if(cnt[x] > 1){
                string d = "";
                for(const char& y : s){
                    if(y != x) {
                        d.push_back(x);
                        d.push_back(y);
                        d.push_back(x);
                        remaining.push_back(d);
                        d = "";
                    }
                }
            }
        }
        for(const string x : remaining){
            cerr << "x is " << x << endl;
            string sub_ans = x;
            int cur = 2;
            cnt[x[0]] -= 2;
            cnt[x[1]]--;
            while(true){
                if(cnt[sub_ans[cur-1]]){
                    cnt[sub_ans[cur-1]]--;
                    sub_ans.push_back(sub_ans[cur-1]);
                    cur++;
                } else {
                    break;
                }
            }
            chmax(ans, sub_ans);
            cnt['R'] = r; cnt['G'] = g; cnt['B'] = b;
        }
        cout << ans << '\n';
    }
    return 0;
}