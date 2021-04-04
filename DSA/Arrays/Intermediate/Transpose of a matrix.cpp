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
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	REP(i, 0, n) {
		REP(j, 0, m) {
			cin >> arr[i][j];
		}
	}
	//Algo1
	// REP(i, 0, n) {
	// 	REP(j, i, m) {
	// 		swap(arr[i][j], arr[j][i]);
	// 	}
	// }
	// REP(i, 0, n) {
	// 	REP(j, 0, m) {

	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	// ALgo2
	int trans[m][n];
	REP(i, 0, n) {
		REP(j, 0, m) {
			trans[j][i] = arr[i][j];
		}
	}
	REP(i, 0, m) {
		REP(j, 0, n) {
			cout << trans[i][j] << " ";
		}
		cout << endl;
	}

}
