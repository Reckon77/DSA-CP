//https://www.youtube.com/watch?v=mkl6KOwtdbk&list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0&index=6
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
const int n = 2;
void generate(int qc, int tq, int chess[n][n]) {
	if (qc == tq) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << chess[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (chess[i][j] == 0) {
				chess[i][j] = qc + 1;
				generate(qc + 1, tq, chess);
				chess[i][j] = 0;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int chess[n][n] = {0};
	generate(0, n, chess);
}
