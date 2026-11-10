/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    map<int,string>ans = {
        {1, "walk"},
        {2, "no"},
        {3, "no"},
        {4, "no"},
        {5, "yes"},
        {6, "yes"},
        {7, "backwards"}, //drow
        {8, "2"}
    };
    int n; cin >> n;
    cout << ans[n] << '\n';
    return 0;
}