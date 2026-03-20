/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
int sum_digits(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        int ans = 0;
        for(int i = 0; i <= 90; i++){
            if((n+i)-sum_digits(n+i) == n) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}