#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int x, y, z;
        cin >> x >> y >> z;
        bool flag = true;
        for(int bit = 0; bit <= 29; bit++){
            int mask = (1<<bit), cnt_1 = 0;
            if(x&mask) cnt_1++;
            if(y&mask) cnt_1++;
            if(z&mask) cnt_1++;
            if(cnt_1 == 2) flag = false;
        }
        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}