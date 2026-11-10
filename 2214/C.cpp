/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    map<int,int> answers = {{1,3}, {2,3}, {3, 11}, {4,90}};
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int a, b, c; 
        cin >> a >> b >> c;
        /* 1 2 3
        1 3 2
        2 1 3
        2 3 1
        3 1 2
        3 2 1 */
        if(a > b){
            swap(a,b);
        }
        if(b > c){
            swap(b,c);
        }
        if(a > b){
            swap(a,b);
        }
        cout << (a^b^c)-b << endl;
    }
    return 0;
}