/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXK 26
int n, k;
bool visited[26];
string s;
vector<int> bad;
int main(){
    cin >> n >> k;
    cin >> s;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        visited[c-97] = true;
    }
    for(int i = 0; i < n; i++){
        if(!visited[s[i]-97]){
            bad.push_back(i);
        }
    }
    ll ans = 0;
    int m = bad.size();
    vector<pair<int,int>> r;
    if(m == 0){
        ans = 1LL*n*(n+1)/2;
    } else {
        r.push_back({0,bad[0]-1});
        for(int i = 1; i < m; i++){
            r.push_back({bad[i-1]+1, bad[i]-1});
        }
        r.push_back({bad[m-1]+1, n-1});
        /* cerr << "the ranges are : \n";
        for(auto ra : r){
            cerr << ra.first << " : " << ra.second<< '\n';
        } */
        for(auto ra : r){
            ans += (ra.second >= ra.first ? 1LL*(ra.second-ra.first+1)*(ra.second-ra.first+2)/2: 0);
        }
    }
    cout << ans << '\n';
    return 0;
}