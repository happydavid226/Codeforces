#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> pxor(n+1,0);
    for(int i = 1; i <= n; i++){
        pxor[i] = pxor[i-1] ^ i;
    }
    for(int i = 0; i <= n; i++){
        cout << i << " : "  << pxor[i] << "\n";
    }
    return 0;
}