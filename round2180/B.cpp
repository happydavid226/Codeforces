#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        string s = "";
        for(int i = 0; i < n; i++){
            string d;
            cin >> d;
            s = min(s + d, d+s);
        }
        cout << s << '\n';
    }
    return 0;
}