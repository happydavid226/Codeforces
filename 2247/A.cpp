/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        if(sum%4 == 0){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}