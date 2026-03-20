#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, x, p = 0,z = 0;
        long long sum = 0;
        cin >> n >> x;
        vector<int> a(n,0);
        for(int bit = 29; bit >= 0; bit--)
            if(x&(1<<bit)) a[p] |= (1<<bit),p = (p+1) % n, sum += (1<<bit);
        for(int i = 0; i < n; i++) if(a[0] == 0) z++;
        if(z&1) sum++;
    }
    return 0;
}