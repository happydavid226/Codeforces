/*Only God can give success*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, cnt_ones = 0, cnt_zeros = 0; cin >> n; string s; cin >> s;
        if(is_sorted(s.begin(), s.end())){
            cout << "Bob\n"; continue; 
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '0') cnt_zeros++;
            else cnt_ones++;
        }
        int i = 0, cur_ones = 0, cur_zeros = 0, a= 1;
        vector<int> ans;
        while((i< n) && (cur_ones != cnt_zeros - cur_zeros)){
            if(s[i] == '0'){
                cur_zeros++;
            } else {
                cur_ones++;
            }
            i++;
        }
        //cerr << "cur ones is " << cur_ones << '\n';
        for(i = 0; a <= cur_ones; i++){
            if(s[i] == '1') ans.push_back(i+1), a++;
        }
        a = 1;
        for(i = 1; a <= cur_ones; i++){
            if(s[n-i] == '0') ans.push_back(n-i+1), a++;
        }
        sort(ans.begin(), ans.end());
        cout << "Alice\n" << ans.size() << '\n';
        for(const int& x : ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}