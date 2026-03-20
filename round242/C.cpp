#include <iostream>
#include <vector>
using namespace std;
int main(){
    int tt = 1;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<int> p(n),q(n);
        for(int i = 0; i < n; i++) cin >> p[i], q[i] = p[i];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                q[i-1] ^= (i%j);
        int Q = 0;
        for(int i = 0; i < n; i++) Q^=q[i];
        cout << Q << '\n';        
    }
    return 0;
}