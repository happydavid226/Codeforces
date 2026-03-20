/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n; 
        string s; cin >> s;
        deque<char>d;
        for(int i = 0; i < n; i++){
            d.push_back(s[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++) ans += (s[i] == '1');
        int leading_zeros = 0, trailing_zeros = 0;
        while(!d.empty()&&d.front() == '0') leading_zeros++, d.pop_front();
        while(!d.empty()&&d.back() == '0') trailing_zeros++, d.pop_back();
        cerr << "leading : " << leading_zeros << " and trailing " << trailing_zeros << endl;
        if(!d.empty()){
            leading_zeros--;
            trailing_zeros--;
        } 
        ans += max(0, (leading_zeros+2)/3);
        ans += max(0, (trailing_zeros+2)/3);
        while(!d.empty()){
            leading_zeros = 0;
            while(!d.empty()&&d.front()=='1')d.pop_front();
            while(!d.empty()&&d.front()=='0') leading_zeros++, d.pop_front();
            ans += leading_zeros/3;
        }
        cout << ans << '\n';
    }
    return 0;
}