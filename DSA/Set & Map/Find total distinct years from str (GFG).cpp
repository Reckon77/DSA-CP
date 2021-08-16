//https://www.geeksforgeeks.org/find-total-number-of-distinct-years-from-a-string/
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
	unordered_set<string>dates;
	string date;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			date.pb(s[i]);
		} else if (s[i] == '-') {
			date.clear();
		}
		if (date.size() == 4) {
			dates.insert(date);
		}

	}
	for (auto d : dates) {
		cout << d << endl;
	}

}
