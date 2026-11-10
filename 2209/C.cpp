/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        bool flag = false;
        for(int i = 3; i <= 2*n; i+=2){
            int is_equal = -1;
            cout << "? " << i << " " << i+1 << endl;
            cin >> is_equal;
            if(is_equal){
                cout << "! " << i << endl;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        int res1 =-1, res2 = -1;
        cout << "? 1 3" << endl;
        cin >> res1;
        cout << "? 1 4" << endl;
        cin >> res2;
        if(res1 == 0 && res2 == 0){
            cout << "! " << 2 << endl;
        } else {
            cout << "! " << 1 << endl;
        }
    }
    return 0;
}