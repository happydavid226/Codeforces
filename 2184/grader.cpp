#include <bits/stdc++.h>
using namespace std;

int main(){
    int cur = 1;
    cout << 6000 << '\n';
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 60; j++){
            cout << i << " " << j << '\n';
            if(cur == 246) { cerr << i << " " << j << '\n'; }
            cur++;
        }
    }
    return 0;
}