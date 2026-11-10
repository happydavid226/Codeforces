#include <bits/stdc++.h>
using namespace std;

int main() {
    string name1 = "A.out";
    string name2 = "sol.out";

    ifstream file1(name1);
    ifstream file2(name2);

    if (!file1 || !file2) {
        cerr << "Error opening files\n";
        return 1;
    }

    string line1, line2;
    int lineNumber = 1;

    while (true) {
        bool r1 = (bool)getline(file1, line1);
        bool r2 = (bool)getline(file2, line2);

        // If both ended → identical
        if (!r1 && !r2) {
            cout << "Files are identical\n";
            return 0;
        }

        // If mismatch in content OR one file ended earlier
        if (!r1 || !r2 || line1 != line2) {
            cout << "First mismatch at line " << lineNumber << "\n\n";

            cout << "File: " << name1 << "\n";
            if (r1) cout << line1 << "\n";
            else cout << "[EOF]\n";

            cout << "\nFile: " << name2 << "\n";
            if (r2) cout << line2 << "\n";
            else cout << "[EOF]\n";

            return 0;
        }

        lineNumber++;
    }
}