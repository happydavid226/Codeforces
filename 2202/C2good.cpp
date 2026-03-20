/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        stack<int> idx,st;
        ll ans = 0LL, mx_ans = 0LL;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty()&&st.top() == a[i]+1){
                st.pop();
                ans -= idx.top();
                idx.pop();
            }
            idx.push(n-i);
            ans += idx.top();
            st.push(a[i]);
            mx_ans += ans;
        }
        cout << mx_ans << '\n';
    }
    return 0;
}