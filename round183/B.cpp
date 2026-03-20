#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n&1){
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cout << (a[i] = i) << ' '; cout << '\n';
        for(int i = 0; i < n; i++) cout << (b[i] = (i+1)%n) << ' '; cout << '\n';
        for(int i = 0; i < n; i++) cout << (a[i]+b[i])%n << ' '; cout << '\n';
    } else cout << -1 << '\n';
}