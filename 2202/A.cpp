/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int x, y; cin >> x >> y;
        bool flag = false;
        if(y >= 0){
            if(x >= 2*y && (x - 2*y)%3==0){
                flag = true;
            }
        } else {
            y = abs(y);
            if(x >= 4*y && (x-4*y)%3==0) flag = true;
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}