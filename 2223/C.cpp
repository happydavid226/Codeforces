/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> pa(n+1, 0);
        bool flag = true;
        for(int i = 0; i < n; i++){
            int cnt = (a[i] == ')') + (b[i] == ')');
            pa[i+1] = pa[i] + cnt;
            int cumo = 2*i - pa[i];
            if(cumo < pa[i+1]){
                flag = false;
            }
            if(i == n-1 && cumo != pa[i+1]){
                flag = false;
            }
            if(i%2 == 0 && cumo == pa[i+1] && a[i] == b[i] && a[i] == ')' && b[i] == ')'){
                flag = false;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}