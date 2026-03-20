#include <iostream>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t= 1; t <= tt; t++){
        int n, x;
        cin >> n >> x;
        long long sum = 0;
        int powers_needed = __builtin_popcount(x);
        if(n == 1 && x == 0) { cout << -1 << '\n'; continue; }
        if(x == 0){
            if(n&1) cout << n+3 << '\n';
            else cout << n << '\n';
            continue;
        }
        if(n == 1 || n <= powers_needed) { cout << x << '\n'; continue; }
        if(x == 1){
            if(n&1) {cout << n << '\n';}
            else cout << n+3 << '\n'; 
            continue;
        }
        n -= powers_needed;
        if(n&1) sum = x + n + 1;
        else sum = x + n;
        cout << sum << '\n';
    }
}