#include <bits/stdc++.h>
 
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define folr(i, a, n) for (auto i = (a); i <= (n); ++i)
#define forl(i, n, a) for (auto i = (n); i >= (a); --i)
using namespace std;
using ll = long long;
 
string to_string(char v) {
	string a = ""; a += v;
	return a;
}
 
template<class A> string to_string(const A& v) {
	string s = "{";
	for (const auto& x : v) s += (sz(s) > 1 ? ", " : "") + to_string(x);
	return s += "}";
}
 
void debug_out() { cerr << '\n'; }
template<class U, class... T> void debug_out(const U& x, const T&... args) {
	cerr << ' ' << to_string(x);
	debug_out(args...);
}
 
mt19937 rng(__builtin_ia32_rdtsc());
template<class T> T rnd(T a, T b) { return uniform_int_distribution<T>(a, b)(rng); }
 
#define sc(x) cerr << "\033[" << x << "m"
#define debug(...) sc(91), cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__), sc(39)
 
 
void solve(const int& ic) {
	int n; cin >> n;
	string s; cin >> s;
	string tmp = "";
	vector<int> suf(n + 1);
	forl(i, n - 1, 0) suf[i] = suf[i + 1] + (s[i] == '('); 
	folr(i, 0, n - 1) {
		if(s[i] == ')') {
			if(suf[i] > 1) {
				cout << n - 2 << '\n';
			}
			else cout << -1 << '\n';
			break;
		}
	}
	
}
 
 
int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int tt = 1; 
	cin >> tt;
	folr(ic, 0, tt - 1) solve(ic);
}