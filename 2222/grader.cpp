#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x = {-2,-1,0,1,2};
    do {
        for(int i : x){
            cout << i << " ";
        }
        cout << endl;
    } while(next_permutation(x.begin(), x.end()));
    return 0;
}