/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
#define inf 1LL*INT_MAX
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m, k; cin >> n >> m >> k;
        vector<ll> a(n); for(int i = 0; i < n; i++) cin >> a[i];
        vector<ll> b(m+2); for(int i = 1; i <= m; i++) cin >> b[i];
        map<ll, set<ll>> mpi_l, mpi_r;
        vector<ll> L(n),R(n);
        b[0] = -inf; b[m+1] = inf;
        string s; cin >> s;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i =0, j = 1;
        while(i < n && j < m+2){
            if(a[i] < b[j]){
                L[i] = llabs(b[j-1]-a[i]);
                mpi_l[L[i]].insert(i);
                i++;
            } else {
                j++;
            }
        }
        i = n-1; j = m;
        while(i >= 0 && j >= 0){
            if(a[i] > b[j]){
                R[i] = llabs(b[j+1]-a[i]);
                mpi_r[R[i]].insert(i);
                i--;
            } else {
                j--;
            }
        }
        /*
        debugging
        cerr << "a is "; for(int i = 0; i < n; i++) cerr << a[i] << " \n"[i==n-1];
        cerr << "b is "; for(int i = 0; i < m+2; i++) cerr << b[i] << " \n"[i==m+1];
        cerr << "l is ";
        for(int i = 0; i < n;i++){
            cerr << L[i] << " \n"[i==n-1];
        }
        cerr << "r is ";
        for(int i = 0; i < n;i++){
            cerr << R[i] << " \n"[i==n-1];
        }
        cerr << "the first map : \n";
        for(auto x : mpi_l){
            cerr << x.first << ":";
            for(const int y:x.second) cerr << y << ' ';
            cerr << '\n';
        }
        cerr << "the second map : \n";
        for(auto x : mpi_r){
            cerr << x.first << ":";
            for(const int y:x.second) cerr << y << ' ';
            cerr << '\n';
        }
            */

        int alive = n;
        int diff = 0;
        for(int i = 0; i < k; i++){
            //cerr << "i is " << i << '\n';
            if(s[i] == 'L'){
                diff++;
                if(diff < 0) {cout << alive << " \n"[i==k-1]; continue; }
                for(const int& x : mpi_l[diff]){
                    mpi_r[R[x]].erase(x);
                    alive--;
                }
                mpi_l[diff].clear();
            } else {
                diff--;
                if(diff > 0) {cout << alive << " \n"[i==k-1]; continue; }
                int abs_diff = abs(diff);
                for(const int& x : mpi_r[abs_diff]){
                    mpi_l[L[x]].erase(x);
                    alive--;
                }
                mpi_r[abs_diff].clear();
            }
            cout << alive << " \n"[i==k-1];
        }
    }
    return 0;
}