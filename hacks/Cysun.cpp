#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int mx = 0;
	stringstream out;
	vector<vector<int>> A(2000, vector<int>(2000));
	for(int i = 0; i < 2000; i++){
		for(int j = 0; j < 2000; j++){
			A[i][j] = (i + j) * 5;
			mx++;
		}
	}
	for(vector<int>& x : A){
		for(int& y : x){..
			y += 5;
			mx++;
		}
	}
	cout << mx << '\n';
	return 0;
}