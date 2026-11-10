/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

const int N = 7;
int a[N];

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        for(int i = 0; i < N; i++){
            cin >> a[i];
        }
        sort(a, a+N);
        reverse(a, a+N);
        int sum = 0;
        sum += a[0];
        for(int i = 1; i < N; i++){
            sum -= a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}