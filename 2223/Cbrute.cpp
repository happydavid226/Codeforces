/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;
 
bool is_balanced(vector<char>& s){
    int n = s.size();
    int cur = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            cur++;
        } else {
            cur--;
        }
        if(cur < 0) return false;
    }
    return cur == 0;
}
bool is_possible(int i, int& n, vector<char>& a, vector<char>& b){
    if(i == n){
        return is_balanced(a) && is_balanced(b);
    }
    bool ans = false;
    if(a[i] != b[i]){
        swap(a[i], b[i]);
        ans = ans || is_possible(i+1, n, a, b);
        swap(a[i], b[i]);
    }
    ans = ans || is_possible(i+1, n, a, b);
    return ans;
}
 
int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string s, t; cin >> s >> t; 
        vector<char> a(n), b(n);
        for(int i= 0; i < n; i++){
            a[i] = s[i];
            b[i] = t[i];
        }
        if(is_possible(0, n, a, b)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}