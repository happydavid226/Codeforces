/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> p(n); set<int> st;
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> p[i];
            st.insert(p[i]);
            if(*st.rbegin() == i+1) ans++;
        }
        cout << ans << '\n';        
    } 
    return 0;
}