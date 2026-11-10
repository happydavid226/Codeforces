/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 200005
int sum_of_digits(int n){
    int ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int a[MAXN];

int main(){
    for(int i = 1; i < MAXN; i++){
        a[i] = a[i-1] + sum_of_digits(i);
    }
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        cout << a[n] << '\n';
    }
    return 0;
}