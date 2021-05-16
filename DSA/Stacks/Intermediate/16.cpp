//https://www.geeksforgeeks.org/expression-contains-redundant-bracket-not/
//https://www.youtube.com/watch?v=rlCSjCGc3Z0 
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
bool isoperator(char a) {
	if (a == '+' || a == '-' || a == '*' || a == '/')
		return true;
	return false;
}
bool isredundatnt(string s) {
	stack<char>st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(' || isoperator(s[i])) {
			st.push(s[i]);
		} else if (s[i] == ')') {
			if (st.empty() || st.top() == '(') {
				return true;
			} else {
				while (isoperator(st.top())) {
					st.pop();
				}
				st.pop();
			}
		}
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	cout << isredundatnt(s);

}
