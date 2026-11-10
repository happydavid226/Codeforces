/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> visited(m, false);
    int ans = 0;
    /* for(int i = 0; i < n; i++){
        cerr << a[i] << " \n"[i==n-1];
    }
    for(int j = 0; j < m; j++){
        cerr << b[j] << " \n"[j==m-1];
    } */
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!visited[j] && abs(a[i] - b[j]) <= 1){
                ans++;
                visited[j] = true;
                //cerr << i+1 << " " << j+1 << '\n';
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}