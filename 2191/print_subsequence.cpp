#include <iostream>
#include <string>
using namespace std;

void printSubsequences(const string &s, int index, string current) {
    // Base case: reached end of string
    if (index == 10 && current[0] == current[1] && current[1] == current[2] && current[2] == '(') {
        cout << current << endl;
        return;
    }

    // Exclude current character
    printSubsequences(s, index + 1, current);

    // Include current character
    printSubsequences(s, index + 1, current + s[index]);
}

int main() {
    string s;
    cin >> s;  // read input string

    printSubsequences(s, 0, "");

    return 0;
}
