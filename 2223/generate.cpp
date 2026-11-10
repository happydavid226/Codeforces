#include <bits/stdc++.h>
using namespace std;

int n;
set<string> sa;

void generate(int i, int curo, int curp, string s){
    if(s.size() == n){
        sa.insert(s);
        return;
    }
    assert(n % 2 == 0);
    if(curo != n/2){
        generate(i+1, curo+1, curp, s + '(');
    }
    if(curp != n/2){
        generate(i+1, curo, curp+1, s + ')');
    }
}

int main(){
    cin >> n;
    generate(0,0,0,"");
    cout << sa.size() * sa.size() << '\n';
    for(auto x : sa){
        for(auto y : sa){
            cout << n << '\n';
            cout << x << '\n';
            cout << y << '\n';
        }
    }
    return 0;
}