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
        for(int i = 0; i < n; i++)cin >> a[i];
        int parent = a[0],ans = 1;
        for(int i = 1; i < n; i++){
            if(!(a[i] == a[i-1]+1 || (a[i] > parent && a[i] <= a[i-1]))) ans++, parent = a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}