#include <bits/stdc++.h>
using namespace std;
long long llmax(long long a, long long b) {return (a > b ? a : b); }
int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> a(n), cnt(30,0);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int bit = 29; bit >= 0; bit--){
            int mask = (1<<bit);
            for(int i = 0; i < n; i++) if(a[i]&mask) cnt[29-bit]++;
        }
        long long max_sum = 0LL;
        for(int i = 0; i < n; i++){
            long long sum =0LL;
            for(int bit = 29; bit >= 0; bit--){
                int mask = (1<<bit);
                if(a[i]&mask) sum += ((int64_t)(n-cnt[29-bit]) * (int64_t)mask);
                else sum += ((int64_t) cnt[29-bit])*(int64_t)mask;
            }
            max_sum = llmax(max_sum, sum);
        }  
        cout << max_sum << '\n';     
    }
}