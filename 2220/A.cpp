/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        vector<int> a(n);
        set<int> st;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }
        if(st.size() != n){
            cout << -1 << '\n';
        } else {
            sort(a.rbegin(), a.rend());
            for(int i = 0; i < n; i++){
                cout << a[i] << " \n"[i==n-1];
            }
            
        }
    } 

    return 0;
}