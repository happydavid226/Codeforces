#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        string a, b;

        cin >> n;
        cin >> a;
        cin >> b;

        int bal = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == '(' && b[i] == '(')
                bal++;
            else if (a[i] == ')' && b[i] == ')')
                bal--;

            if (bal < 0)
                ok = false;
        }

        if (bal != 0)
            ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }
}