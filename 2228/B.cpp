/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int dist(int i, int j, int n){
    if(j == n+1) j = 1;
    if(j == 0) j = n;
    if(i < j) return j - i;
    return n - i + j;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        if(n <= 3){
            cout << 1 << '\n';
            continue;
        }
        cout << k + min(dist(x1,x2,n), dist(x2,x1,n))<< '\n';
    }
    return 0;
}