#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int total_open = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '(') total_open++;
        if (b[i] == '(') total_open++;
    }

    // Condition 1: Total opens must equal n (n/2 for each string)
    if (total_open != n) {
        cout << "NO\n";
        return;
    }

    // Condition 2 & 3: Check prefix opens and suffix closes
    int current_open = 0;
    int current_close = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == '(') current_open++;
        if (b[i] == '(') current_open++;
        
        if (a[n - 1 - i] == ')') current_close++;
        if (b[n - 1 - i] == ')') current_close++;

        // At prefix/suffix of length i+1, we need at least i+1 brackets
        if (current_open < i + 1 || current_close < i + 1) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}