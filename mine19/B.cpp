/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt_odd = 0, cnt_even = 0, last_odd = -1, last_even = -1;
    for(int i = 1; i <= n; i++){
        int data;
        cin >> data;
        if(data&1){
            cnt_odd++;
            last_odd = i;
        } else {
            cnt_even++;
            last_even = i;
        }
    }
    cout << (cnt_odd == 1 ? last_odd : last_even) << '\n';
    return 0;
}