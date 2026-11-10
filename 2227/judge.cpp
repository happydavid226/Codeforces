#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans1 = 0, ans2 = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if(i <= 2 ||j >= 7){
                ans1++;
            }
            if(i <= 4){
                ans2++;
            }
        }
    }
    cerr << "ans1 : " << ans1 << '\n';
    cerr << "ans2 : " << ans2 << '\n';
}