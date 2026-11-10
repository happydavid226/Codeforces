/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int N; cin >> N;
        vector<int> a(N);
        vector<bool> visited(N, false);
        for(int i = 0; i < N; i++) cin >> a[i];
        int cur = N;
        int ans = 0;
        for(int i = 0; i < N; i++){
            if(visited[i])break;
            if(a[i]-1 <= i){
                //cerr << "a[i] is " << a[i] << '\n';
                ans++;
                continue;
            }
            if(a[i] == cur){
                visited[a[i]-1] = true;
                ans++;
                cur--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}