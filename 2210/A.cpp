/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int N;
        cin >> N;
        for(int i = N; i >= 1; i--){
            cout << i << " \n"[i==1];
        }
        vector<int> a;
        for(int i = N; i >= 2; i--){
            a.push_back(i%(i-1));
        }
        reverse(a.begin(), a.end());
        assert(is_sorted(a.begin(), a.end()));
    }
    return 0;
}