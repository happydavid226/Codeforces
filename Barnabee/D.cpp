#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n,y,r; cin >> n >> y >> r;
        cout << min(n, (y/2)+r) << '\n';
    }
    return 0;
}