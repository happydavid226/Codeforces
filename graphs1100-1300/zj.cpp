/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int n, m; 
    cin >> n >>  m;
    vector<int> visited(n+1, false);
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        visited[a] = visited[b] = true;
    }
    int node = find(visited.begin()+1, visited.end(), false) - visited.begin();
    cout << n-1 << '\n';
    for(int i = 1; i <= n; i++){
        if(i != node){
            cout << node << " " << i << '\n';
        }
    }
    return 0;
}