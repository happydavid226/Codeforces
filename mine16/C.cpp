/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; 
        cin >> n;
        string s;
        cin >> s;
        string a = "1", b = "1";
        int cnt[2] = {0, 0};
        bool found = false;
        for(int i = 1; i < n; i++){
            if(s[i] == '1'){
                if(!found){
                    a += "0";
                    b += "1";
                    found = true;
                } else {
                    a += "1";
                    b += "0";
                }
            } else {
                if(found){
                    a.push_back(s[i]);
                    b.push_back('0');
                } else {
                    if(s[i] == '2'){
                        a.push_back('1');
                        b.push_back('1');
                    } else {
                        a.push_back(s[i]);
                        b.push_back(s[i]);
                    }
                }
            }
        }
        cout << a << '\n';
        cout << b << '\n';
    }
    return 0;
}