//https://www.youtube.com/watch?v=05y82cP3bJo&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=51&t=627s
//https://www.youtube.com/watch?v=i05Ju7AftcM
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
const int n = 4;
bool isSafe(int mat[][n], int row, int col) {
	for (int i = row - 1; i >= 0; i--) {
		if (mat[i][col] == 1) {
			return false;
		}
	}
	for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
		if (mat[i][j] == 1) {
			return false;
		}
	}
	for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
		if (mat[i][j] == 1) {
			return false;
		}
	}
	return true;
}
void nqueen(int mat[][n], int row, string op) {
	if (row == n) {
		cout << op << endl;
		return;
	}

	for (int col = 0; col < n; col++) {
		if (isSafe(mat, row, col)) {
			mat[row][col] = 1;
			nqueen(mat, row + 1, op + to_string(row) + to_string(col) + "_");
			mat[row][col] = 0;
		}

	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// int n;
	// cin >> n;
	int arr[n][n];
	REP(i, 0, n) {
		REP(j, 0, n) {
			arr[i][j] = 0;
		}
	}
	string op = "";
	nqueen(arr, 0, op);

}
