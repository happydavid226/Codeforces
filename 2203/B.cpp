/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int f(ll x){
    int sum = 0;
    while(x > 0) sum += (int)(x%10), x /= 10;
    return sum;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n; cin >> n;
        //cout << n << " : ";
        int sum = 0;
        vector<int> digits, cnt(10,0);
        int fi = -1;
        while(n > 0){
            digits.push_back((n%10));
            cnt[(int) (n%10)]++;
            sum += (int) (n%10);
            fi = n%10;
            n /= 10;
        }
        //cerr << "fi is " << fi << '\n';
        bool flag =false;
        sort(digits.rbegin(), digits.rend());
        ////cerr << "digits are : "; for(int x : digits) ////cerr << x << ' '; ////cerr << endl;
        int ans = 0;
        int i = 0;
        while(sum >= 10){
            while(sum >= 10 && cnt[digits[i]]){
                //cerr << "sum is " << sum << '\n';
                //cerr << "digits[i] is " << digits[i] << '\n';
                //cerr << "cnt[digits] is " << cnt[digits[i]] << '\n';
                if(digits[i] == fi && !flag && cnt[digits[i]] == 1){
                    flag =true;
                    sum -= digits[i]-1;
                } else {
                    sum -= digits[i];
                }
                cnt[digits[i]]--;
                ans++;  
            }
            i++;
        }
        cout << ans << '\n';        
    }
    return 0;
}