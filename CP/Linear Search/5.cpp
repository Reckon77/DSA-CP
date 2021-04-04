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
		int n;
		cin >> n;
		if (n % 21 == 0) {
			cout << "The streak is broken!" << endl;
		} else {
			stringstream ss;
			ss << n;
			string s;
			ss >> s;
			bool flag = false;
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == '2' && s[i + 1] == '1') {
					flag = true;
					break;
				}
			}
			if (flag) {
				cout << "The streak is broken!" << endl;
			} else {
				cout << "The streak lives still in our heart!" << endl;
			}
		}
	}

}
