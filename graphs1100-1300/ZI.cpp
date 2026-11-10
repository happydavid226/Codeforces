/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int a, b, c; 
    cin >> a >> b >> c;
    int x = (a+b-c)/2;
    if((x * 2 == a + b -c) && (a >= x && b >= x) && (a+b >= c)){
        cout << x << " " << b-x << " " << a-x << '\n'; 
    } else {
        cout << "Impossible\n";
    }
    return 0;
}