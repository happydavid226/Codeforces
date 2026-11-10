/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int a , b;
        cin >> a >> b;
        if(a %2 == 1 && b % 2 == 1){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}