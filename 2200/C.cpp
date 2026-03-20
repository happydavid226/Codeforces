/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string s; cin >> s;
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(!st.empty() && s[i] == st.top()){
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        cout << (st.empty() ? "Yes\n" : "No\n");
    }
    return 0;
}