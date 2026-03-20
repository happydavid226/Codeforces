#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int t= 1; t <= tt; t++){
        int n, winner = -1, bit, ans = 0;
        cin >> n; vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i], ans ^= a[i];
        for(int i = 0; i < n; i++) cin >> b[i], ans ^= b[i];
        if(ans == 0) { cout << "Tie\n"; continue; }
        for(bit = 19; bit >= 0; bit--) if(ans & (1 << bit)) break;
        for(int i = 0; i < n; i++) if((a[i]^b[i]) & (1 << bit)) winner=i;
        cout << (winner&1 ? "Mai\n" : "Ajisai\n");
    }
    return 0;
}