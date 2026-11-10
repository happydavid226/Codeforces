#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 51;
    long long total = 1LL * n * n * n;

    cout << total << "\n";

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                cout << i << " " << j << " " << k << "\n";
            }
        }
    }

    return 0;
}