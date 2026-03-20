/*Obeying God is the only way of success*/
#include <bits/stdc++.h>
using namespace std;
bool check(int l, int r, int num){
    return (r-l >= num || ((l%num) > (r%num)));
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(c >= a*2 && d >= b*2){
            cout << a*2 << " " << b*2 << '\n';
            continue;
        }
        bool flag = true;
        if(c >= a*2){
            int num = c/a;
            for(int i = 2; i <= num; i++){
                if(b%i == 0){
                    int x = b/i;
                    if(check(b,d,x)){
                        int ans = 0;
                        while(!(ans <= d && ans >= b)) ans += x;
                        cout << (a*i) << " " << ans << '\n';
                        flag = false;
                    }
                }
                if(!flag) break;
            }
            if(!flag) continue;
        }
        if(d >= b*2){
            int num = d/b;
            for(int i = 2; i <= num; i++){
                if(a%i == 0){
                    int x = a/i;
                    if(check(a,c,x)){
                        int ans = 0;
                        while(!(ans <= d && ans >= b)) ans += x;
                        cout << ans << " " << (b*i) << '\n';
                        flag = false;
                    }
                }
                if(!flag) break;
            }
            if(!flag) continue;
        }
        if(check(a,c,b) && check(b,d,a)){
            int ans1 = 0;
            while(!(ans1 <= c && ans1 > a)) ans1+=b;
            int ans2 = 0;
            while(!(ans2 <= d && ans2 > b)) ans2+=a;
            cout << ans1 << " " << ans2 << '\n';
            continue;
        }
        if(check(a,c,b)){
            int i = a+1;
            while(i%b != 0)i++;
            for(; i <= c; i+=b){
                int num = i/b;
                if(check(b,d,a/num) && a%num == 0){
                    int ans = 0;
                    while(!(ans <= d && ans >= c)) ans += a/num;
                    cout << i << " " << ans << '\n';
                    flag = false;
                }
                if(!flag) break;
            }
            if(!flag) continue;
        }
        if(check(b,d,a)){
            int i = b+1;
            while(i%a != 0)i++;
            for(; i<=d;i+=a){
                int num = i/a;
                if(check(a,c,b/num) && b%num == 0){
                    int ans = 0;
                    while(!(ans <= c && ans >= a)) ans += b/num;
                    cout << ans << " " << i << '\n';
                    flag = false;
                }
                if(!flag) break;
            }
            if(!flag) continue;
        }
        cout << "-1 -1\n";        
    }
    return 0;
}