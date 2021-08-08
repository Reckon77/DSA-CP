//https://www.youtube.com/watch?v=Ra_fCLyWtr0&list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0&index=5
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
void generate(int qc, int tq, int r, int c, string op) {
	if (r == tq) {
		if (qc == tq) {
			cout << op << endl;
		}
		return;
	}
	string yes = op;
	string no = op;
	if (c == tq - 1) {
		r++;
		c = 0;
		yes += "q\n";
		no += "-\n";
	} else {
		c++;
		yes += "q";
		no += "-";
	}
	generate(qc, tq, r, c, no);
	generate(qc + 1, tq, r, c, yes);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string op = "";
	generate(0, 3, 0, 0, op);
}
