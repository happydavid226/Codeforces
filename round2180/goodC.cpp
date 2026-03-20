#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k;
        cin >> n >> k;
        if(k == 1){ cout << n << ' '; return 0; }
        for(int i = 0; i < k-2; i++) cout << n << ' ';
        if(!(k&1)) cout << 0 << ' ';
        else cout << n << ' ';
        cout << n << '\n';
    }
    return 0;
}