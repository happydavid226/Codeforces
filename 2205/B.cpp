#include <bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0) return a; 
    return gcd(b, a % b);
}

int main(){
    set<int> primes;
    for(int i = 2; i <= 40000; i++){
        bool flag = false;
        for(const int& x : primes){
            if(i%x == 0) flag = true;
        }
        if(!flag)primes.insert(i);
    }
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n,m; cin >> n, m = n;
        /* if(t == 6){
            //cerr << "let is print the numbers " << '\n';
            while(m > 0){
                //cerr << "m is " << m << '\n';
                if(m&1){
                    //cerr << "ended when m is " << m << '\n';
                    break;
                }
                m >>= 1;
            }
        } */
        if(primes.count(n)){
            cout << n << '\n';
        } else {
            int ans = 1;
            bool flag = false;
            vector<int> b;
            //cerr << "let us look at divisible primes : ";
            for(int x : primes){
                if(n%x == 0){
                    flag = true;
                    while(n%x==0){
                        n /= x;
                    }
                    b.push_back(n);

                    ans *= x;
                }
            }

            //cerr << "\nans is " << ans << '\n';
            //cerr << "and b has "; for(int x : b) cout << x << ' ';
            cout << '\n';
            for(int x : b){
                if((gcd(ans,x)==1)) ans *= x;
            }
            if(!flag) cout << n << '\n';
            else cout << ans << '\n';
        }
    }
    return 0;
}