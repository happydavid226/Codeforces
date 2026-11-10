/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int n; cin >> n;
    unsigned int sum = (unsigned int)(1LL*(1LL*n*(n+1))/2);
    if(sum & 1){
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    sum /= 2;
    vector<int> ans;
    for(int i = n; i >= 1; i--){
        if(sum >= i){
            ans.push_back(i);
            sum -= i;
        }
    }
    assert(sum == 0);
    cout << ans.size() << " ";
    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
    return 0;
}