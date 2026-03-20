/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i], b[i]  = a[i];
        sort(b.rbegin(), b.rend());
        int good_index = -1, good_index2 = -1;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && good_index == -1) good_index = i;
            if(good_index != -1 && a[i] == b[good_index]) good_index2 = i;
        }
        if(good_index != -1 && good_index2 != -1)
            reverse(a.begin()+good_index, a.begin()+good_index2+1);
        for(int i = 0; i < n; i++) cout << a[i] << " \n"[i==n-1];
    }
    return 0;
}