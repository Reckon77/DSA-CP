//https://www.geeksforgeeks.org/postfix-to-infix/
//Postfix to infix
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
void inputarr(int arr[], int n) {
	REP(i, 0, n) {
		cin >> arr[i];
	}
}
string getString(char x)
{
	string s(1, x);
	return s;
}
bool isoperand(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))return true;
	return false;
}
string posttoinf(string s) {
	stack<string> st;
	for (int i = 0; i < s.length(); i++) {
		if (isoperand(s[i])) {
			st.push(getString(s[i]));
		} else {
			string a = st.top();
			st.pop();
			string b = st.top();
			st.pop();
			string c = "(" + b + s[i] + a + ")";
			st.push(c);
		}
	}
	return st.top();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string post;
	cin >> post;
	cout << posttoinf(pre);

}
