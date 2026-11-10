/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int a, b, c;
        cin >> a >> b >> c;
        int rounds = 0;
        while((a != b) && (a != c) && (b != c)){
            vector<int> x = {a, b, c};
            sort(x.begin(), x.end());
            a = x[0], b = x[1], c = x[2];
            c--;
            a++;
            rounds++;
        }
        cout << rounds << endl;
    }
    return 0;
}