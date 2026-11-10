/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1LL*inf*inf
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        map<int,int> freq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }
        ll ans = 0;
        vector<int> b;
        b.push_back(freq.rbegin()->first);
        freq.rbegin()->second--;
        for(auto el : freq){
            b.push_back(el.first);
            el.second--;
        }
        for(auto el : freq){
            while(el.second > 0){
                b.push_back(el.first);
                el.second--;
            }
        }
        swap(a,b);
        /* for(int x : a){
            cerr << x << " ";
        }
        cerr << endl; */
        int cur_mex = 0;
        set<int> st;
        for(int i = 0; i < n; i++){
            st.insert(a[i]);
            while(st.count(cur_mex)){
                cur_mex++;
            }
            ans += cur_mex + a[0];
        }
        cout << ans << '\n';
    }
    return 0;
}