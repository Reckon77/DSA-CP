//Done with scaline algo trick
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
	int n, p;
	cin >> n >> p;
	int arr[p + 1] = {0};
	int size = p + 1;
	while (n--) {
		int x, r;
		cin >> x >> r;
		int rang1, rang2;
		if (x + r > size) {
			rang1 = size;
		} else {
			rang1 = x + r;

		}
		if (x - r < 0) {
			rang2 = 0;
		} else {
			rang2 = x - r;
		}
		// cout << rang2 << " " << rang1 << endl;
		arr[rang2]++;
		arr[rang1 + 1]--;
		// for (int i = rang2; i <= rang1; i++) {
		// 	arr[i]++;
		// }
	}
	// REP(i, 0, size) {
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;
	REP(i, 1, size) {
		arr[i] = arr[i] + arr[i - 1];
	}
	// REP(i, 0, size) {
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;
	int ctr = 0, maxctr = 0;
	REP(i, 0, size) {
		if (arr[i] != 1) {
			int j = i;
			while (arr[j] != 1 && j < size) {
				ctr++;
				j++;
			}
			i = j;
		}
		if (ctr > maxctr) {
			maxctr = ctr;
		}
		ctr = 0;
	}
	cout << maxctr;


}
