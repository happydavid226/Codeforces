/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int pos[1000005];

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cur = 1;
    for(int i = 0; i < n; i++){
        int j = cur;
        for(; j < cur + a[i]; j++){
            pos[j] = i+1;
        }
        cur = j;
    }
    /* for(int i = 1; i <= 25; i++){
        cout << pos[i] << " \n"[i==25];
    } */
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        cout << pos[x] << '\n';
    }
    return 0;
}