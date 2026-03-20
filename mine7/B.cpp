#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string& s, int a, int b){
    if(a >= b) return true;
    if(s[a] != s[b]) return false;
    return is_palindrome(s, a+1, b-1);
}

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string s = "";
        while(n>0 && (n&1)==0) n >>= 1;
        while(n > 0){
            if(n&1) s = '1'+s;
            else s = '0'+s;
            n >>=1;
        }
        if(is_palindrome(s, 0, s.size()-1) && (s.size()%2 == 0 || (s.size()%2 == 1 && s[s.size()/2] != '1'))) cout << "Yes\n";
        else cout << "No\n";
    }
}