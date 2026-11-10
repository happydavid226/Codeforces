/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, m; 
        cin >> n >> m;
        vector<int> a(n);
        queue<int> q;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        bool flag = true;
        while(!q.empty()){
            int cur = q.front();
            int cnt = 0;
            while(!q.empty() && q.front() == cur){
                q.pop();
                cnt++;
            }
            if(cnt >= m) {
                flag = false;
            }
        }
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}