/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int mex(const vector<int>& a){
    set<int> s;
    for(const int& x : a) s.insert(x);
    for(int i = 0; i <= s.size(); i++){
        if(!s.count(i)) return i;
    }
    return -1;
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n; bool flag = true;
        vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
        set<int> s; for(int i = 0; i < n; i++) s.insert(a[i]);
        a.resize(0);
        for(const int& x : s) a.push_back(x);
        int mx_cnt = 0, mx_l = 0;
        for(int i = 0; i < n; i++){
            int l = i,r=i;
            int cnt = 0;
            while(r+1< n && a[r]+1 == a[r+1]){
                r++;cnt++;
            }
            if(cnt > mx_cnt) {
                mx_cnt = cnt;
                mx_l = l;
            }
        }
        int diff = a[mx_l];
        for(int i = 0; i < n;i++){
            a[i] -= diff;
        }
        //for(int i = 0; i < n; i++) cerr << a[i] << " \n"[i==n-1];
        cout << mex(a) << '\n';
    }
    return 0;
}