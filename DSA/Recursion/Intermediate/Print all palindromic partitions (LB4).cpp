//https://www.geeksforgeeks.org/given-a-string-print-all-possible-palindromic-partition/
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

void substrr(vector<string>&ans, string s) {
	if (s.size() == 1) {
		ans.push_back(s);
		return;
	}
	if (s.size() != 0) {
		ans.push_back(s);
		s.erase(s.size() - 1, 1);
		substrr(ans, s);
	}

}
bool isPalin(string s) {
	int i = 0, j = s.size() - 1;
	while (i <= j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<string>ans, res;
	string s;
	cin >> s;
	int n = s.size();
	while (s.size() > 0) {
		substrr(ans, s);
		s.erase(0, 1);
	}
	for (int i = 0; i < ans.size(); i++) {
		if (isPalin(ans[i])) {
			res.push_back(ans[i]);
		}
	}
	for (auto&a : res) {
		cout << a << endl;
	}

}
