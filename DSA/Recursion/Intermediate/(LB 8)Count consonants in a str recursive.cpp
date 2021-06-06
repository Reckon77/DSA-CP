//https://www.geeksforgeeks.org/count-consonants-string-iterative-recursive-methods/
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

bool iscon(char x) {
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == ' ') {
		return false;
	}
	return true;
}
int countcon(string s) {
	if (s.size() == 0) {
		return 0;
	}
	if (iscon(s[0])) {
		s.erase(0, 1);
		return countcon(s) + 1;
	} else {
		s.erase(0, 1);
		return countcon(s);
	}

}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string>ans;
	string s1;
	getline(cin, s1);
	cout << countcon(s1);

}
