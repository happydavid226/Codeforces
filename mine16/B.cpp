/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> ans(n);
    char options[2] = {'B', 'W'};
    for(int i = 0; i < n; i++){
        string  s;
        cin >> s;
        for(int j = 0; j < m; j++){
            if(s[j] == '-'){
                cout << s[j];
            } else {
                cout << options[(i+j)&1];
            }
        }
        cout << '\n';
    }
    return 0;
}