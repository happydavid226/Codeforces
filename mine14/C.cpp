/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n , k; 
        cin >> n >> k;
        if(n < k){
            goto out;
        }
        if(n&1){
            if(k&1){
                cout << "YES\n";
                for(int i = 0; i < k-1; i++){
                    cout << "1 ";
                }
                cout << n - (k-1) << '\n';
                goto outer;
            } else {
                goto out;
            }
        } else {
            if(k & 1){
                if(n <= 2*(k-1)){
                    goto out;
                } 
                cout << "YES\n";
                for(int i = 0; i < k-1; i++){
                    cout << "2 ";
                } 
                cout << n - (2*(k-1)) << '\n';
                goto outer;
            } else {
                cout << "YES\n";
                for(int i = 0; i < k-1; i++){
                    cout << "1 ";
                }
                cout << (n - (k-1)) << '\n';
                goto outer;
            }
        }
        out:;
        cout << "NO\n";
        continue;
        outer:;
    }
    return 0;
}