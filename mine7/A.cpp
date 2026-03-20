#include <bits/stdc++.h>
using namespace std;

int msb(int a){
    int x = ~a, ans = 0;
    for(int bit = 0; bit <= 29; bit++)
        if((x&(1<<bit)) == 0) ans = (1<<bit);
    return ans;    
}

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int a, b;
        cin >> a >> b;
        vector<int> ans;
        int x = msb(b), y = msb(a);
        if(x > y) { cout << -1 << '\n'; continue; }
        for(int bit = 0; bit <= 29; bit++)
            if((a&(1<<bit)) != (b&(1<<bit))) ans.push_back(1<<bit);
        cout << ans.size() << '\n';
        for(const int& x : ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}