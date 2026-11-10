/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1LL*inf*inf
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int x, y;
        cin >> x >> y;
        swap(x,y);
        int sum = x * -1 + y;
        if(sum == 0){
            cout << 1 << '\n';
            for(int i = 0; i < x; i++){
                cout << -1 << " ";
            }
            for(int i = 0; i < y; i++){
                cout << 1 << " ";
            }
            cout << '\n';
            continue;
        }
        int s = sum;
        sum = abs(sum);
        int ans = 0;
        for(int i = 1; i <= sum; i++){
            if(sum % i == 0) ans++;
        }
        cout << ans << '\n';
        if(x > y){
            for(int i = 0; i < x; i++){
                cout << -1 << " ";
            }   
            for(int i = 0; i < y; i++){
                cout << 1 << " ";
            }  
            cout << '\n';
        } else {
            for(int i = 0; i < y; i++){
                cout << 1 << " ";
            }   
            for(int i = 0; i < x; i++){
                cout << -1 << " ";
            }  
            cout << '\n';   
        }
    }
    return 0;
}