/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n; 
        int uni = 0;
        vector<int> cnt(100000,0);
        vector<vector<int>> a(n, vector<int> (n));
        bool flag = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                cnt[a[i][j]]++;
                if(cnt[a[i][j]] == 1) uni++;
                if(cnt[a[i][j]] > (n)*(n-1)) flag = false;
            }
            //cerr << uni << " " << flag << '\n';
        }
        if(n == 1){
            cout << "No\n";
            continue;
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}