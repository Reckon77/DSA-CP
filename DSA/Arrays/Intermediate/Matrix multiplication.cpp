//Matrix multiplication
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
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int m1[n1][n2];
	int m2[n2][n3];
	REP(i, 0, n1) {
		REP(j, 0, n2) {
			cin >> m1[i][j];
		}
	}
	REP(i, 0, n2) {
		REP(j, 0, n3) {
			cin >> m2[i][j];
		}
	}
	int ans[n1][n3];
	REP(i, 0, n1) {
		REP(j, 0, n3) {
			ans[i][j] = 0;
		}
	}
	REP(i, 0, n1) {
		REP(j, 0, n3) {
			REP(k, 0, n2) {
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	REP(i, 0, n1) {
		REP(j, 0, n3) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
