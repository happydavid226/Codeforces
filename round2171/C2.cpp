#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int  t = 1; t <= tt; t++){
        int n;
        cin >> n;
        int ans = 0;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i], ans ^= a[i];
        for(int i = 0; i < n; i++) cin >> b[i], ans ^= b[i];
        if(ans == 0) { cout << "Tie\n"; continue; }
        bool flag = false;
        for(int bit = 19; bit >= 0; bit--){
            int mask = 1 << bit;
            int winner = -1;
            int set_bits = 0;
            for(int i = 0; i < n; i++)
                if(a[i]&mask) set_bits++;
            for(int i = 0; i < n; i++)
                if(b[i]&mask) set_bits++;
            if(set_bits%2 == 0) continue;
            for(int i = 0; i < n; i++)
                if((a[i]&mask) != (b[i]&mask)) winner = i;
            if(winner == -1) continue;
            if(winner&1) cout << "Mai\n";
            else cout << "Ajisai\n";
            break;            
        }
    }
    return 0;
}