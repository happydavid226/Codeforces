/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
 
int main(){
    vector<int> boys(102, 0), girls(102,0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        boys[a[i]]++;
    }
    int m; 
    cin >> m;
    vector<int> b(m);
    for(int  i = 0; i < m; i++){
        cin >> b[i];
        girls[b[i]]++;
    }
    int ans = 0;
    for(int i = 1; i <= 100; i++){
        for(int j = 0; j <= 1; j++){
            if(boys[i] == girls[i+j]){
                ans += boys[i];
                girls[i+j] = boys[i] = 0;
            } else if(boys[i] < girls[i+j]){
                ans += boys[i];
                girls[i+j] -= boys[i];
                boys[i] = 0;
            } else if(boys[i] > girls[i+j]){
                ans += girls[i+j];
                boys[i] -= girls[i+j];
                girls[i+j] = 0;
            }
            if(boys[i] == girls[i-j]){
                ans += boys[i];
                girls[i-j] = boys[i] = 0;
            } else if(boys[i] < girls[i-j]){
                ans += boys[i];
                girls[i-j] -= boys[i];
                boys[i] = 0;
            } else if(boys[i] > girls[i-j]){
                ans += girls[i-j];
                boys[i] -= girls[i-j];
                girls[i-j] = 0;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}