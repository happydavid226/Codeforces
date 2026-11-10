/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int x, y; 
        cin >> x >> y;
        if(y == x + 1 || (x > y && (x-y)%9 == 8)){
            cout << "Yes\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}