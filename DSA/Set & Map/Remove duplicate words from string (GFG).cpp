//https://www.geeksforgeeks.org/remove-duplicaterepeated-words-string/
//Remove duplicate words from a string
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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	unordered_set<string>words;
	int pos = 0;
	string ans;
	string t;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			t = s.substr(pos, i - pos);
			if (words.find(t) == words.end()) {
				words.insert(t);
				ans = ans + t + " ";
			}

			pos = i + 1;
		}
	}
	t = s.substr(pos, s.size());
	if (words.find(t) == words.end()) {
		words.insert(t);
		ans = ans + t + " ";
	}
	words.insert(t);
	cout << ans;

}
