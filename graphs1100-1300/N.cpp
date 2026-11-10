/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
#define MAXN 32768
using namespace std;

int n;
vector<int> a;
int mn[MAXN][16];

int solve(int i,int k){
    //cerr << "i is " << i << " and k is " << k << '\n';
    if(i == 0) return 0;
    if(k >= 15) return k;
    if(mn[i][k] != -1) return mn[i][k];
    return mn[i][k] = min(solve((i*2)%MAXN, k+1) + 1, solve((i+1)%MAXN, k+1) + 1);
}

int main(){
    cin >> n; a.resize(n);
    for(int i = 1; i < MAXN; i++){
        for(int j = 0; j < 16; j++){
            mn[i][j] = -1;
        }
    }
    for(int i = 0; i < n; i++){
        cin >> a[i]; cout << solve(a[i],0) << '\n';
    } 
    cout << '\n';
    return 0;
}