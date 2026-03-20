#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool count(stack<int>& s, int target){
    if(s.empty()) return false;
    int top = s.top();
    s.pop();
    bool found = (top == target) || count(s, target);
    s.push(top);
    return found;
}

int main(){
    int t; cin >> t;
    while(t--){
	int n;
        cin >> n;
        string s;
        cin >> s;
        int j = 1;
        int k = n;
        stack<int> st1, st2;
        for(int i = n - 2; i >= 0; i--){
	    if(s[i] == '<'){ st1.push(j); j++; }
            if(s[i] == '>'){ st2.push(k); k--; }
        }
        int rem;
        for(int i = 1; i <= n; i++){
	   if(!count(st1, i) && !count(st2, i)){
		rem = i;
		break;
	   }
	}
        cout << rem << " ";
        for(int i = 0; i< n-1; i++){
	    if(s[i] == '<'){ cout << st1.top() << " "; st1.pop(); }
            else { cout << st2.top() << " "; st2.pop(); }
            
	}
        cout << "\n";


    }
    return 0;
}