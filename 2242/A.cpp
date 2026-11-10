/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int k; cin >> k;
        int x;
        int cnt_2 = 0;
        bool flag = false;
        for(int i = 0; i < k; i++){
            cin >> x;
            if(x >= 2){
                cnt_2++;
            }
            if(x > 2){
                flag = true;
            }
        }
        flag = flag || (cnt_2 >=2);
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}