/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2){
        int diff = y2 - y1;
        cout << x1+diff << " " << y1 << " " << x2+diff << " " << y2 << '\n';
    } else if(y1 == y2){
        int diff = x2 - x1;
        cout << x1 << " " << y1+diff << " " << x2 << " " << y2+diff << "\n";
    } else {
        int diffx = x2 - x1, diffy = y2-y1;
        //cerr << x1 << " : " << x2 << '\n';
        if(abs(diffx) != abs(diffy)){
            cout << -1 << '\n';
        } else {
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << '\n';
        }
    }
    return 0;
}