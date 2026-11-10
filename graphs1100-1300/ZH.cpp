/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
    int rook = ((r1 == r2 || c1 == c2) ? 1 : 2);
    int bishop = ((abs(r1-r2) + abs(c1-c2)) % 2 == 1 ? 0 : ((r1-c1 == r2-c2 || r1 + c1 == r2 + c2) ? 1 : 2 ));
    int king = max(abs(r1-r2), abs(c1-c2));
    cout << rook << " " << bishop << " " << king << '\n';
    return 0;
}