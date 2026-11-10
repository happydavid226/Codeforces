/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), suff(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = n-1; i >= 0; i--){
            suff[i] = (i == n-1 ? a[i] : min(suff[i+1], a[i]));
        }
        stack<int> st;
        vector<int> idx(n);
        for(int i = 0; i < n; i++){
            while(!st.empty() && a[st.top()] >= a[i]){
                st.pop();
            }
            if(st.empty()){
                idx[i] = -1;
            } else {
                idx[i] = st.top();
            }
            st.push(i);
        }
        ll initial = 0LL;
        for(int i = 0; i < n; i++){
            initial += max(0, a[i] - suff[i]);
        }
        //cerr << "initial is " << initial << '\n';
        int mx_add = 0;
        for(int i = n-1; i >= 0; i--){
            if(a[i] != suff[i]) continue;
            int x = idx[i];
            if(x == -1){
                mx_add = max(i,mx_add);
            } else {
                mx_add = max(i-x-1,mx_add);
            }
        }
        cout << initial + mx_add << '\n';
    }
    return 0;
}