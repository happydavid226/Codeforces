/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

string form(const string& a){
    string d = "";
    for(char c : a){
        d += tolower(c);
    }
    return d;
}

int main(){
    int n; cin >> n;
    int ans = 1;
    map<string,int> mp;
    mp["polycarp"] = 1;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b >> b;
        a = form(a); b = form(b);
        mp[a] = mp[b] + 1;
        ans = max(ans, mp[a]);
    }
    cout << ans << '\n';
    return 0;
}