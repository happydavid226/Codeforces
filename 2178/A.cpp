#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t= 1; t <= tt; t++){
        string s; cin >> s;
        int cnt_y = 0;
        for(int i = 0; i < s.size(); i++) if(s[i] == 'Y') cnt_y++;
        cout << (cnt_y <= 1 ? "Yes\n" : "No\n");
    }
    return 0;
}