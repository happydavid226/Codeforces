#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> c = {0,0,1,2};
    int i = 1;
    do {
        //cout << i++ << " : ";
        for(int x : c){
            cout << x <<  " ";
        }
        cout << endl;
    } while(next_permutation(c.begin(), c.end()));
    return 0;
}