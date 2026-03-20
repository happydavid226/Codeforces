/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m, cnt_ones = 0; cin >> n >> m;
        vector<int> cntj(m);
        vector<vector<int>> b(n, vector<int>(m)), c(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                cin >> c[i][j];
                b[i][j] = (i == 0 ? c[i][j] : b[i-1][j] + c[i][j]);
                cntj[j] += c[i][j];
                cnt_ones += c[i][j];
            }
        int cur = 0,i = 0, j = 0;
        string ans = "";
        while(i< n && j < m && cur <= cnt_ones/2){
            int go_right = cur + cntj[j] - b[i][j] + c[i][j];
            if(go_right <= cnt_ones/2)cur = go_right,j++,ans += 'R';
            else ans += 'D',i++;
        }
        while(i < n)ans += 'D', i++;
        while(j < m) ans += 'R', j++;
        cout << 1LL*cur*(cnt_ones-cur) << '\n' << ans << '\n';        
    }
    return 0;
}