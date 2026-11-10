/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string s; cin >> s;
        set<string> st;
        for(int l = 0; l < n; l++){
            for(int r = l; r < n; r++){
                if(s[l] != s[r]){
                    continue;
                }
                reverse(s.begin() + l, s.begin() + (r+1));
                st.insert(s);
                reverse(s.begin() + l, s.begin() + (r+1));
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}