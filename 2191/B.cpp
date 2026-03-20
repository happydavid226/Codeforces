/*Only God can give success*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        int cnt_zero = 0, cnt_one = 0;
        for(int i = 0; i < n; i++){
            int data; cin >> data;
            if(data == 0) cnt_zero++;
            if(data == 1) cnt_one++;
        }
        if((cnt_zero >= 2 && cnt_one == 0) || (cnt_zero == 0)){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}