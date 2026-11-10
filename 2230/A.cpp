/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, a, b; cin >> n >> a >> b;
        ll groups_of_threes = n/3;
        ll rem_group_twos = (n-groups_of_threes*3)/2;
        ll rem_ones = n - (groups_of_threes*3) - rem_group_twos*2;
        cout << min(groups_of_threes*b, groups_of_threes*3*a) + min(rem_group_twos*b, rem_group_twos*2*a) + min(a,b)*rem_ones << '\n';
    }
    return 0;
}