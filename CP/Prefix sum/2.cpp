//https://www.codechef.com/problems/BLONDIE
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
		ll arr[n];
		REP(i, 0, n) {
			cin >> arr[i];
		}
		ll pf[n] = {0};
		pf[0] = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] == -1) {
				arr[i] = pf[i - 1] / i;
			}
			pf[i] = arr[i] + pf[i - 1];

		}
		REP(i, 0, n) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}


}
