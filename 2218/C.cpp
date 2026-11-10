/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int N; 

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> N;
        int cur = 3*N;
        for(int i= 1; i <= N; i++){
            cout << i << " " << cur-1 << " " << cur << " ";
            cur -= 2;
        }
        cout << '\n';
    }
    return 0;
}