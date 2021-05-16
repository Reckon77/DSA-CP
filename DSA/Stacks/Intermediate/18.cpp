//https://www.geeksforgeeks.org/remove-brackets-algebraic-string-containing-operators/
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef unordered_map<int, int> umap;
void inputarr(int arr[], int n) {REP(i, 0, n) {cin >> arr[i];}}
string rembrac(string s) {
	stack<int>st;
	st.push(0);
	string res;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+') {
			if (st.top() == 1) {
				res.pb('-');
			} else {
				res.pb('+');
			}
		} else if (s[i] == '-') {
			if (st.top() == 1) {
				res.pb('+');
			} else {
				res.pb('-');
			}
		} else if (s[i] == '(' && i > 0) {
			if (s[i - 1] == '-') {
				int x;
				if (st.top() == 1) {
					x = 0;
				} else {
					x = 1;
				}
				st.push(x);
			} else if (s[i - 1] == '+') {
				st.push(st.top());
			}
		} else if (s[i] == ')') {
			st.pop();
		} else {
			res.pb(s[i]);
		}
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	cout << rembrac(s);

}
