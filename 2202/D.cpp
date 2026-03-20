/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k; cin >> n >> k;
        if(k >= 2*n || k < n){
            cout << "NO\n"; continue;
        }
        cout << "YES\n";
        if(k < n + (n+1)/2){
            int diff = k - n;
            for(int i = 1; i <= n-2*diff; i++){
                cout << i << ' ' << i << ' ';
            }
            for(int k = 0; k <= 1; k++){
                for(int i = n-2*diff+1; i <= n; i++){
                    cout << i << ' ';
                }
            }
        } else {
            int diff = 2*n - k;
            for(int i = 1; i <= diff*2; i++){
                cout << i << ' ';
            }
            int g=0;
            for(int i = 1; diff*2+i <= n; i++){
                cout << diff*2+i << ' ' << i << ' ';
                g = i;
            }
            for(int i = g+1; i <= n; i++){
                cout << i << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}