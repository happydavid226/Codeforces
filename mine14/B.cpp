/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> a(n);
    int num_ones = 0, num_zeros = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        num_ones += (a[i] == 1);
        num_zeros += (a[i] == 0);
    }
    int mx_ans = 0;
    for(int l = 0; l < n; l++){
        for(int r = l; r < n; r++){
            int cur_ones = 0, cur_zeros = 0;
            for(int k = l; k <= r; k++){
                cur_ones += (a[k] == 1);
                cur_zeros += (a[k] == 0);
            }
            mx_ans = max(mx_ans, num_ones - cur_ones + cur_zeros);
        }
    }
    cout << mx_ans << '\n';
    return 0;
}