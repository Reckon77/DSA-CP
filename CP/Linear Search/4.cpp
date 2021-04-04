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
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		int ones = 0;
		REP(i, 0, s.length()) {
			if (s[i] == '1') {
				ones++;
			}
		}
		if (ones == 0) {
			cout << "NO" << endl;
		} else {
			int j = 0, ctr = 0;
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == '1') {
					j = i;
					while (s[j] == '1') {
						j++;
						ctr++;
					}
					break;
				}
			}
			if (ctr == ones) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}

	}

}
