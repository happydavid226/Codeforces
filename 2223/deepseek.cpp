#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        // Necessary condition: total '(' must be exactly n
        int total_open = count(a.begin(), a.end(), '(') +
                         count(b.begin(), b.end(), '(');
        if (total_open != n) {
            cout << "NO\n";
            continue;
        }

        int S = 0;          // sum of balances
        int L = 0, R = 0;   // current interval of possible D values
        int c = 0;          // modulo class (0 or 2)
        bool possible = true;

        auto mod4 = [](int x) {
            return (x % 4 + 4) % 4;
        };

        for (int i = 0; i < n; ++i) {
            if (a[i] == '(' && b[i] == '(') {
                S += 2;
                L = max(L, -S);
                R = min(R,  S);
            } else if (a[i] == ')' && b[i] == ')') {
                S -= 2;
                L = max(L, -S);
                R = min(R,  S);
            } else { // mixed column
                c = (c + 2) % 4;
                L -= 2;
                R += 2;
                L = max(L, -S);
                R = min(R,  S);
            }

            // force modulo
            while (mod4(L) != c) L += 2;
            while (mod4(R) != c) R -= 2;

            if (L > R) {
                possible = false;
                break;
            }
        }

        if (possible && S == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}