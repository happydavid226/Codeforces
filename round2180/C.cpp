#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k;
        cin >> n >> k;
        if(k&1){
            for(int i = 0; i < k; i++) cout << n << ' ';
            cout << '\n';
            continue;
        }
        vector<int> a(k, 0);
        int p = 0;
        for(int bit = 29; bit >= 0; bit--){
            if(n&(1<<bit)){
                for(int i = 0; i < k; i++)
                    if(i != (p%k))
                        a[i] |= (1 << bit);
                p++;
            } else {
                int x = p - (p&1);
                for(int i = 0; i < k; i++)
                    if(i < x)
                        a[i] |= (1 << bit);
            }
        }
        for(int i = 0; i < k; i++) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}