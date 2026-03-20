#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n,cnt = 0; cin >> n; string s; cin >> s;
        int i = 0; 
        while(s[i] == '(') i++;
        while(i < n && s[i] == ')')i++;
        for(;i<n;i++){
            if(s[i] =='(')cnt++;
        }
        if(cnt>1) cout << n-2 << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}