/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int odd_zeros = 0, odd_ones = 0, even_zeros = 0, even_ones = 0;
        int distance = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                if(i % 2 == 0){
                    if(a[i] == '0'){
                        even_zeros++;
                    } else {
                        even_ones++;
                    }
                } else {
                    if(a[i] == '0'){
                        odd_zeros++;
                    } else {
                        odd_ones++;
                    }
                }
            }
            distance += ((even_ones != even_zeros) + (odd_ones != odd_zeros));
        }
        if((even_zeros != even_ones) || (odd_zeros != odd_ones)){
            cout << -1 << '\n';
        } else {
            cout << (distance/2) << '\n';
        }
    }
    return 0;
}