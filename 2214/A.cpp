/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    vector<string> answers;
    int idx = 11;
    for(int i = 0; i < 3; i++){
        for(int j = 1; j <= 5; j++){
            char x = 'A'+i;
            string d = ""; d.push_back(x); d.push_back(j+'0');
            answers.push_back(d);
        }
    }
    cout << answers[idx] << endl;
    return 0;
}