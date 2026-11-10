/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int n; 
vector<int> a;

bool solve(int i, int cur){
    if(i == n){
        if(cur % 360 == 0){
            return true;
        }
        return false;
    }
    return solve(i+1, (cur + a[i]) % 360) || solve(i+1, ((cur - a[i]) % 360));
}

int main(){
    cin >> n;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(solve(0,0)){
        cout << "YES\n";
    }  else {
        cout << "NO\n";
    }
    return 0;
}