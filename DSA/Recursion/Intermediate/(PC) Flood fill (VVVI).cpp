//https://www.youtube.com/watch?v=R1URUB6_y2k&list=PL-Jc9J83PIiFxaBahjslhBD1LiJAV7nKs&index=47
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

void floodfill(int r, int c, int dr, int dc, string op, int mat[3][3], bool visited[3][3]) {
	if (r < 0 || c < 0 || c > dc || r > dr ) {
		return;
	}
	if (mat[r][c] == 1 || visited[r][c] == true) {
		return;
	}
	if (r == dr && c == dc) {
		cout << op;
		return;
	}
	visited[r][c] = true;
	floodfill(r - 1, c, dr, dc, op + "t", mat, visited);
	floodfill(r, c - 1, dr, dc, op + "l", mat, visited);
	floodfill(r + 1, c, dr, dc, op + "d", mat, visited);
	floodfill(r, c + 1, dr, dc, op + "r", mat, visited);
	visited[r][c] = false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int mat[3][3] = {{0, 0, 0}, {1, 0, 1}, {0, 0, 0}};
	bool visited[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			visited[i][j] = false;
		}
		cout << endl;
	}
	string op = "";
	floodfill(0, 0, 2, 2, op, mat, visited);
}
