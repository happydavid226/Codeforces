/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int calc_mex(int l, int r, vector<int>& el, int n){
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(i);
    }
    while(l >= 0 && r < n && el[l] == el[r]){
        st.erase(el[l]);
        l++;
        r--;
    }
    return *st.begin();
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(2*n);
        int x =-1, y = -1;
        for(int i = 0; i < 2*n; i++){
            cin >> a[i];
            if(a[i] == 0){
                if(x == -1) x = i;
                else y = i;
            }
        }
        assert(x != -1 && y != -1);
        cout << max({calc_mex(x,x,a,2*n), calc_mex(y,y,a,2*n), calc_mex((x+y)/2, ((x+y+1)/2), a, 2*n)}) << '\n';
    }
    return 0;
}