//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/knights-tour-official/ojquestion
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
const int n = 5;
void knightstour(int mat[][n], int row, int col, int cnt) {
	if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] != 0) {
		return;
	}
	if (cnt == n * n) {
		mat[row][col] = cnt;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		mat[row][col] = 0;
		return;
	}

	mat[row][col] = cnt;
	knightstour(mat, row - 2, col + 1, cnt + 1);
	knightstour(mat, row - 1, col + 2, cnt + 1);
	knightstour(mat, row + 1, col + 2, cnt + 1);
	knightstour(mat, row + 2, col + 1, cnt + 1);
	knightstour(mat, row + 2, col - 1, cnt + 1);
	knightstour(mat, row + 1, col - 2, cnt + 1);
	knightstour(mat, row - 1, col - 2, cnt + 1);
	knightstour(mat, row - 2, col - 1, cnt + 1);
	mat[row][col] = 0;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int arr[n][n];
	REP(i, 0, n) {
		REP(j, 0, n) {
			arr[i][j] = 0;
		}
	}
	knightstour(arr, 2, 0, 1);


}
